#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 9, 11, 13, 15, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222, 9999, 6};
    int num = 30, sum = 0;
    int initial = 0, final;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        sum=0;
        for (int k = i; k < (sizeof(arr) / sizeof(arr[0])); k++)
        {
            sum += arr[k];
            if (sum == num)
            {
                initial = i;
                final = k;
            }
        }
    }
    int checksum=0;
    for (int j = initial; j <= final; j++)
    {
        checksum += arr[j];
    }
    cout << checksum << "  " << initial << "  " << final;
    cout << endl;
    return 0;
}