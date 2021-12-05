#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 9, 11, 13, 15, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222, 9999, 6,99999};
    int rec = 0;
    int recday = arr[0];
    int index = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        int curr = arr[i];
        for (int k = i; k < (sizeof(arr) / sizeof(arr[0])); k++)
        {
            if ((i == 0 && k == 0) || ((recday < arr[k] )&& (arr[k] > arr[k + 1])))
            {
                recday = arr[k];
                index = k-1;
                rec++;
            }
        }
    }
    // time complexity O(n^2)
    cout << rec;
    cout << endl;
    return 0;
}