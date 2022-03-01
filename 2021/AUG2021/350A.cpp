#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,m,x;
	cin>>n>>m;
	vector<ll> u;
	vector<ll> v;
	ll sm=INT_MAX,sm2=INT_MAX,la=INT_MIN;

	for(ll i=0;i<n;i++){
		cin>>x;
		la = max(x,la);
		sm2 = min(x,sm2);
		u.push_back(x);
	}

	for(ll i=0;i<m;i++){
		cin>>x;
		sm = min(x,sm);
		v.push_back(x);
	}
	// cout<<sm2<<" "<<la<<" "<<sm<<endl;
	ll ans = max(2*sm2,la);
	if(ans<sm){
		cout<<ans;
	}else cout<<-1;

	return 0;
}