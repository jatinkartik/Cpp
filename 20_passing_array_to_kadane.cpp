#include <iostream>
#include <stdlib.h>
using namespace std;
int kadane(int arr[], int n)
{

    int currSum = 0, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum <= 0)
        {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}
int main()
{
    int arr[] = {4, -4, 6, -7, 10, 14, -11, 12, -12};
    // int arr[] = {64, -34, 25, 12, 22, 11, -90, 10, -3, 12, 7, 9, 11, -13, 15, -2, 11, 9, 8, 54, -76, 4, 74, -84, 3, 63, -63, 74, 3, 3, 22, -99, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int normal = kadane(arr, n);
    int wrapSum = 0, totSum = 0, nonWrapSum = 0;
    for (int i = 0; i < n; i++)
    {
        totSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = kadane(arr, n);
    cout << wrapSum << " " << totSum;
    nonWrapSum = totSum + wrapSum;
    cout << endl
         << max(nonWrapSum, max(wrapSum,normal)) << " " << normal;
    return 0;
}