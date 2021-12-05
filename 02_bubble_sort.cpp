#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: - ";
    cin >> n;
    int arr[n], num;
    cout << "Enter the elements of the array: -";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cin >> arr[i];
    }

    for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
    {
        for (int j = 0; j < (sizeof(arr) / sizeof(arr[0]) - k); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
            for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
            {
                cout << arr[k] << "  ";
            }
            cout << endl;
        }
    }
    for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
    {
        cout << arr[k] << "  ";
    }
    cout << endl;
    return 0;
}