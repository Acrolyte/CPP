#include <bits/stdc++.h>
using namespace std;

int check(int n){
	string s= to_string(n);
	for(auto i : s){
		if(i=='3'||i=='7'){}
			else return 0;
	}
	return 1;
}

int main()
{
	int n,t;
	cin >> t;
	while(t--){
		cin >> n;
		if(check(n)==1)
		{
			cout << "LUCKY"<< endl;
		}
		else
			cout << "BETTER LUCK NEXT TIME" << endl;

	}
	
	return 0;
}