#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // int arr[] = {64, -34, 25, 14, 22, 11, -90, 10, -3, 12, 7, 9, 11, -13, 15, -2, 11, 9, 8, 54, -76, 4, 74, -84, 3, 63, -63, 74, 3, 3, 22, -99, 6};
    int arr[] = {4, -4, 6, -7, 10, 14, -11, 12, -12};

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
            for (int h = 0; h < n; h++)
            {
                cout << arr[h] << " ";
            }
            cout<<endl;
        }
        cout <<endl<<" khatam"<<endl;
    }

    cout << endl;
    return 0;
}