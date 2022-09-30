#include<bits/stdc++.h>
using namespace std;

int main(){
	int a = 10;
	int *aptr = &a;
	cout<<*aptr<<" is value of a by pointer "<<endl;
	*aptr = 20;
	cout<<*aptr<<" is updated value of a by pointer "<<endl;
	int arr[] = {54,2,6,75,53,64};
	int *ptr = arr; // here we dont need to pass the address of the array 
	// because array is const pointer to the memory
	for (int i = 0; i < 6; i++) {
	cout<<*ptr<<" is the value of the elements of the array";
	cout<<endl;
	ptr++;
	}
	for (int i = 0; i < 6; i++) {
		cout<<*(arr+i)<<" this will also print the value of the element "<<endl;
		// i dont know the reason of this but according to apna college 
		// the array is pointer if we add anything it will point to next element
		// not to the next memory address like if i = 2
		// 200+i = 204 in integer pointer case 
		// because of this next time value is added point to next pointer 
		// but arr++; is invalid 
		
	}
}

