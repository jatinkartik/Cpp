#include<bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
	//heap and stack memory
	int a = 8; // allocated in stack memory
	int *ptr = new int();
	*ptr= 10;
	cout<<" the heap value of the ptr is : -- "<<*ptr;
	cout<<" the heap value of the ptr is : -- "<<*ptr;
	delete(ptr);
	ptr = new int[4];
	cout<<" enter the four value ";
	cin>>ptr[0];
	cin>>ptr[1];
	cin>>ptr[2];
	cin>>ptr[3];
	for (int i = 0; i < 4; i++) {
	cout<<endl<<*ptr;
	ptr++;
	}
	cout<<*ptr<<"hello"<<endl;
	delete(ptr);
	return 0;
}
