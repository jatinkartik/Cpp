#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[])
{
	string str = "jatinkartiktyagi";
	sort(str.begin(),str.end());
	cout<<endl<<str;
	sort(str.begin(),str.end(),greater<char>());
	cout<<endl<<str;
	return 0;
}
