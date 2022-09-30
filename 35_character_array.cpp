#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int arr_size;
    // cout << " Enter the size of the array : - ";
    cin >> arr_size;
    char arr[arr_size + 1];
    // cout<<"Enter the character array : - ";
    cin>>arr;
    int i = 0;
    while (arr[i] != '\0')
    {
        cout<<arr[i];
        i++;
    }
    
    cout<<endl;
    return 0;
}
