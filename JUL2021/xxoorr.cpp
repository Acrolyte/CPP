#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define po(n) pow(2,n)

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll> v;
		ll x;

		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		ll p=0;
		while(p+1){
			for(auto i : v){
				x = i ^ (int) po(p);
				if()
			}
			p++;
		}
	}
	return 0;
}