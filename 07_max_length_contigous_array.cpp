#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int ans = NULL;
    int j, curr, prev, index;
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 9, 11, 13, 15, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222, 9999, 6};
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        j = 2;
        curr = 2;
        prev = arr[i + 1] - arr[i];
        index = 0;

        while (j < (sizeof(arr) / sizeof(arr[0])))
        {

            if (prev == (arr[j + 1] - arr[j]))
            {
                index = j;
                curr++;
            }
            else
            {
                prev = arr[j + 1] - arr[j];
                curr = 2;
            }
            j++;
            ans = max(ans, curr);
        }

    }
    cout<<ans<<" "<<index-1;
    // because we have initialised i when prev == curr  that means j index was come before the actual index we have initialized
    cout << endl;
    return 0;
}