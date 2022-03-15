#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int checkarr[INT16_MAX],mindex=INT16_MAX;
    for (int k = 0; k < INT16_MAX; k++)
    {
        checkarr[k] = -1;
    }
    for (int j = 0; j < n; j++)
    {
        if(checkarr[arr[j]]!=-1){
            mindex  = min(arr[j],mindex);
            cout<<arr[j]<<" at index "<<checkarr[arr[j]]<<endl;
        }
        if (checkarr[arr[j]] == -1)
        {
            checkarr[arr[j]] = j;
        }
    }
    cout<<mindex;
    cout << endl;
    return 0;
}