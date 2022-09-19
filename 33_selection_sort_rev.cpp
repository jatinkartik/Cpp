#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int arr[] = { 12,45,23,51,19,8};
	int n = sizeof(arr)/sizeof(arr[0]);	
	for (int i = 0; i < n -1; i++){
		for (int k = i+1; i< n; k++){
			if(arr[i] > arr[k]){
				swap(arr[i], arr[k]);
			}
			for(int j = 0 ; j < n; j++){
				cout<<" " << arr[j];
			}
			cout<<endl;
		}
	}
return 0;
}
