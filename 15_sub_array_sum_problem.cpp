#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int arr[] = {64, -34, 25, 12, 22, 11, -90, 10, -3, 12, 7, 9, 11, -13, 15, -2, 11, 9, 8, 54, -76, 4, 74, -84, 3, 63, -63, 74, 3, 3, 22, -99, 6};
    // int arr[] ={-1,4,7,2};
    int size[sizeof(arr)/sizeof(arr[0])];
    int ans=0,temp=0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        for (int k = i; k < sizeof(arr)/sizeof(arr[0]); k++)
        {   temp=0;
            for (int j = i; j <= k; j++)
            {
                cout<<arr[j]<<"  ";
                temp +=arr[j];

            }
            ans = max(temp,ans);
            cout<<endl;
        }
        
    }
    
    cout<<ans;
cout<<endl;
return 0;
}