#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, sum = 12;
    int num[n];
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int startindex = 0, endindex = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            num[i] += arr[k];
        }
        // cout<<num[i]<<endl;
    }
    // int bb = -1;
    for (int t = 1; t < n; t++)
    {
        for (int h = t - 1; h > 1; h--)
        {

            if (sum == num[t] - num[h])
            {
                cout << "yes that sum is present";
                // bb = 1;
            }
            else
            {
            }
        }
    }
        // if (bb == -1)
        // {
        //     cout<<"sum not present";
        // }
        // else{
        //     cout<<"sum present";
        // }
        
    cout << endl;
    return 0;
}