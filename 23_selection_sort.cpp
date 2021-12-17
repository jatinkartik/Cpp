#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {4, -4, 6, -7, 10, 14, -11, 12, -12};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        for (int k = i+1; k < n; k++)
        {
            if (arr[i] > arr[k])
            {
                swap(arr[k], arr[i]);
            }
            for (int h = 0; h < n; h++)
            {
                cout << arr[h] << " ";
            }
            cout << endl;
        }
        cout << endl
             << " khatam" << endl;
    }
    cout << endl;
    return 0;
}