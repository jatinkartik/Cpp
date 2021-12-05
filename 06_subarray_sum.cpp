#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222, 9999, 6};
    int sum;
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        sum =0;
        for (int j = i; j < (sizeof(arr)/sizeof(arr[0])); j++)
        {
            sum += arr[j];
            cout<<sum<<endl;
        }
    }
    
    cout << endl;
    return 0;
}