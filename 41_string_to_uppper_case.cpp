#include<bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
	string str1 = "asdfghjkl";
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] >= 'a'&& str1[i]<='z'){
			str1[i] -= 32;	
		}	
	}
	cout<<endl<<str1;
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] >= 'a'&& str1[i]<='z'){
		}
		str1[i] += 32;	
	}
	cout<<endl<<str1;
	return 0;
}
