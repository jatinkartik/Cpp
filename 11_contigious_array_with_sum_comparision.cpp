#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int index, prev;
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 10, 3, 12, 7, 9, 11, 13, 15, 2, 11, 9, 8, 54, 76, 4, 74, 7854, 3, 63, 63, 74, 3, 3, 222, 9999, 6};
    int j = 2;
    int curr = 2;
    int indexCount = 0;
    int ans = 0;
    int elementCount = 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        prev = arr[i + 1] - arr[i];
        curr = 2;
        index = 0;
        j = 2;
        indexCount = 0;
        elementCount = 1;

        int sum = 0;
        while (j < sizeof(arr) / sizeof(arr[0]))
        {
            if (prev == arr[j + 1] - arr[j])
            {
                curr++;
                if (indexCount == 0)
                {
                    index = j - 1;
                    elementCount = 1;
                }
                if (indexCount != 0)
                {
                    elementCount++;
                }

                indexCount++;
            }
            else
            {
                prev = arr[j + 1] - arr[j];
                indexCount = 0;
                curr = 2;
            }
            j++;
            ans = max(ans, curr);
        }
        cout << ans << " " << index << endl;
    }

    cout << endl;
    return 0;
}