#include<bits/stdc++.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main (int argc, char *argv[])
{
	string str = "aghsdbugvueiorifvjbsivduvisdnvjcbksddgdfoaifasudids";
	int ocurr[26];
	for (int i = 0; i < 26; i++) {
	ocurr[i] = 0;
	}
	for (int i = 0; i < str.length(); i++) {
	ocurr[str[i]-'a'] ++;	
	}
	char ans = 'a';
	int maxoccur;
	for (int i = 0; i < 26; i++) {
	maxoccur  = max(maxoccur,ocurr[i]);	
	ans = i +'a';
	}
	cout<<endl<<ans<<"  "<<maxoccur;
	return 0;
}
