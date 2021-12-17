#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[] = {-12, -11, -7, -4, 4, 6, 7, 23, 53};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1, num = -2;
    while (low<high)
    {
        if (arr[low] + arr[high] == num)
        {
            cout << arr[low] << " at " << low << "  " << arr[high] << " at " << high;
            return 0;
        }
        else if (arr[low] + arr[high] > num)
        {
            high--;
        }
        else if (arr[low] + arr[high] < num)
        {
            low++;
        }
    }
    cout<<"sum not exist";

    cout << endl;
    return 0;
}