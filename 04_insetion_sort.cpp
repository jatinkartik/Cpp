#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222, 6};

    for (int k = 1; k < (sizeof(arr) / sizeof(arr[0])); k++)
    {
        int num = arr[k];
        int j = k - 1;
        while (num < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = num;
    }

    for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
    {
        cout << arr[k] << "  ";
    }
    cout << endl;
    cout << endl;
    return 0;
}