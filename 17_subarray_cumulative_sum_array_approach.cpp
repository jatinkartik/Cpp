#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {64, -34, 25, 12, 22, 11, -90, 10, -3, 12, 7, 9, 11, -13, 15, -2, 11, 9, 8, 54, -76, 4, 74, -84, 3, 63, -63, 74, 3, 3, 22, -99, 6};
    int size[sizeof(arr) / sizeof(arr[0])];
    for (int f = 0; f < sizeof(arr) / sizeof(arr[0]); f++)
    {
        size[f]= 0;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int k = 1; k <= i; k++)
        {
            size[i] += arr[k-1];
        }
    }
    int maxSum=0,currSum=0;
    int s,e;
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int k = 1; k < i; k++)
        {
            currSum = size[i] - size[k-1];
            if(currSum>maxSum){
                s=i;
                e=k;
            }
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<maxSum<<" "<<s<<"  "<<e<<endl;
    cout << endl;
    return 0;
}