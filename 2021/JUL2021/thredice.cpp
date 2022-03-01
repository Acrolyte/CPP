#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;


	while(t--){
		ll x,y;
		cin>>x>>y;

		if(x+y>=6)
			cout<<0;
		else{
			ll dif = 6-(x+y);
			cout << (float) dif/6;
		}
		cout<<endl;
	}
	return 0;
}