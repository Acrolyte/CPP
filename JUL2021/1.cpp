#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n){
	string s = to_string(n);
	for(auto i : s){
		// cout<<i<<" ";
		if(i=='9' or i=='6');
		else
			return false;	
	}
	// cout << endl;
	return true;
}
int main()
{
	ll n,t;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		s="NO";
		if(check(n)) s = "YES";
		cout<< s <<endl; 
	}
	return 0;
}