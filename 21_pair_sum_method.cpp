#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {64, -34, 25, 14, 22, 11, -90, 10, -3, 12, 7, 9, 11, -13, 15, -2, 11, 9, 8, 54, -76, 4, 74, -84, 3, 63, -63, 74, 3, 3, 22, -99, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 88;
    for (int i = 0; i < n-1; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if (arr[i] + arr[k]==num)
            {
                cout<<i<<"  "<<k<<endl;
                cout<<arr[i]<<"  "<<arr[k];
                return 0;
            }
            
        }
        
    }
    
    cout << endl;
    return 0;
}