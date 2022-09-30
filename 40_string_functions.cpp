#include<bits/stdc++.h>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{
	string str;
	cin>>str;
	cout<<str; // this is output first word if string you entered has space 
			   // to solve this issue we will use getline(cin,var)
	getline(cin,str);
	cout<<str;

	// now lets see string function

	string s1 = "fam";
	string s2 = "ily";
	/* //concatenate fucntion */ 
	/* cout<<endl<<s1.concatenate(s2); */
	cout<<endl<<s1.compare(s2);
	s1.append(s2);
	cout<<endl<<s1;
	s1.clear();
	s1 = "fam";
	cout<<endl<<s1.empty();
	s1.erase(0,1);// delete 1 element from index 0;
	s1.find("f"); // return the first index of the f char
	s1.insert(2,"jatin kartik tyagi");
	cout<<endl<<s1;
	s2.length();// length of the string
	s1.size(); // also return length of the string and size 
	string s3 = s1.substr(2,18);
	cout<<endl<<s3;
	string s4 = "898";
	int x = stoi(s4);
	cout<<endl<<x+6;
	x = 9999;
	string s5 =	to_string(x);
	cout<<endl<<s5+"jatin kartik tyagi is great person";

	return 0;


}
