#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int num, target;
    int arr[num];
    cin >> target;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int test;
    for (int j = 0; j < num; j++)
    {
        int test = arr[j];
        for (int k = j + 1; k < num; k++)
        {
            if ((test + arr[k]) == target)
            {
                cout << "index element is " << j << "and " << k << endl;
            }
        }

    }
        cout << endl;
        return 0;
}