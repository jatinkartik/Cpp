#include <iostream>
#include <stdlib.h>
using namespace std;
int first_and_last(int arr[], int target, int num)
{
    int start = 0, end = num - 1, mid;
    while (start <= end)
    {
        // mid = (start + end) / 2;
        mid = start + (end / 2) - (start / 2);
        if (target == arr[mid])

        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
            ;
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num;
    // cout<<"Enter the lenght of the array : -- ";
    cin >> num;
    // cout<<"enter the element one by one : -- ";
    int arr[num];
    int target;
    // cout << "Enter the element to search : - ";
    cin >> target;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int output = first_and_last(arr, target, num);
    if (output != -1)
    {
        cout << output;
        // return 0;
    }
    cout << "no index found";
    cout << endl;
    return 0;
}