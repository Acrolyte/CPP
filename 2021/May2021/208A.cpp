#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,w="WUB";
	getline(cin,s);
	int i=0;

	while(s.find(w)!=string::npos)
		s.replace(s.find(w),3," ");

	cout << s;
	return 0;
}