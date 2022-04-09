#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll a,b,s;
		cin>>a>>b;
		s = a+b;
		if(s<3) 
			cout<<1;
		else if(s>=3 and s<=10) 
			cout<<2;
		else if(s>=11 and s<=60) 
			cout<<3;
		else
			cout<<4;
		cout<<endl;
	}

	return 0;
}