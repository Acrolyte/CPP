#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<char> x;
	string s;
	getline(cin,s);
	for(auto it : s){
		if(it>='a' && it<='z')
			x.insert(it);
	}
	cout << x.size();
	return 0;
}