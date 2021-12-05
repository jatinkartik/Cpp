#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int max = 0;
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222,9999, 6};
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "the max no in array is " << max << endl;
    cout << endl;
    return 0;
}