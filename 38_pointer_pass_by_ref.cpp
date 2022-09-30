#include<bits/stdc++.h>
using namespace std;
void swap(int *ptr,int *ptra);
int main (int argc, char *argv[])
{
	int a =9,b=8;
	int *aptr=&a,*bptr=&b;
	swap(&a,&b);
	return 0;
}

void swap(int *ptr,int *ptra){
	int temp = *ptr;
	*ptr = *ptra;
	*ptra = temp;
}
