#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int n,m;
    cout<<"hello";
    cout<<endl;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cin>>arr[i][k];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }
    
cout<<endl;
return 0;
}