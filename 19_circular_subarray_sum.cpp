#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // int arr[] = {64, -34, 25, 12, 22, 11, -90, 10, -3, 12, 7, 9, 11, -13, 15, -2, 11, 9, 8, 54, -76, 4, 74, -84, 3, 63, -63, 74, 3, 3, 22, -99, 6};
    int arr[] = {4, -4, 6, -6, 10, -11, 12};
    int maxSum = 0, sum = 0, totalsum = 0;
    for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++)
    {
        totalsum += arr[k];
        arr[k] = -arr[k];
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    cout << totalsum+maxSum;

    cout << endl;
    return 0;
}