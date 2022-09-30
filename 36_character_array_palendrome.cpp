#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<"Enter the char arr : - ";
	char arr[n+1];
	cin>>arr;
	int i =0;
	bool flag = true;
	while (i<n-1)
	{
		if(arr[i] != arr[n-1-i]){
		flag = false;
		break;
		}
	i++;	
	}
	if(flag == 1){
		cout<<"array is palendrome "<<endl;
	}
	else{
		cout<<"array is not palendrome"<<endl;
	}
	return 0;
}







