#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
      int arr[] = {64, 34, 25, 12, 22, 11, 90};

    for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])-1); k++)
    {
        for (int j = k; j < (sizeof(arr) / sizeof(arr[0])); j++)
        {
            if (arr[k]>arr[j])
            {
                swap(arr[k],arr[j]);
            }
              for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++)
            {
                cout << arr[k] << "  ";
            }
            cout << endl;
            
        }
    }
    cout << endl;
    return 0;
}