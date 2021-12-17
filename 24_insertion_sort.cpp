#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {4, -4, 6, -7, 10, 14, -11, 12, -12};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (temp<arr[j]&&j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
         for (int h = 0; h < n; h++)
            {
                cout << arr[h] << " ";
            }
            cout << endl;
        
    }

    cout << endl;
    return 0;
}