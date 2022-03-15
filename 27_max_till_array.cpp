#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen(
        "input.txt", "r", stdin);
    freopen(
        "output.txt", "w", stdout);
#endif
    int n, mx = INT16_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int k = 0; k < n; k++)
    {
        mx = max(mx, arr[k]);
        cout << mx << endl;
    }

    cout << endl;
    return 0;
}