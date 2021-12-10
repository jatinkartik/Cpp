#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int ans = -1;
    int arr[] = {64, 34,1,0, 25, 12, 22, 11, 90, 10, 3, 12, 7, 9, 11, 13, 15, 2, 11, 9, 8, 54, 76, 4, 74, 78, 3, 63, 63, 74, 3, 3, 222, 99, 6};
    // bool check[sizeof(arr) / sizeof(arr[0])];
    bool check[10000];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        check[i] = false;
    }
    for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++)
    {
        if (arr[k] >= 0)
        {
            check[arr[k]] = true;
        }
    }
    
    for (int o = 0; o < sizeof(arr) / sizeof(arr[0]); o++)
    {
        if (check[o] == false)
        {
            ans = o;
            break;
        }
    }
    cout << ans << endl;

    cout << endl;
    return 0;
}