#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;

	while(t--){
		ll n;
		cin>>n;
		ll x;
		ll a[n]={};
		map<ll, ll> mp;
		
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			auto it = mp.find(a[i]);
			if(it==mp.end())
				mp.insert({a[i],1});
			else
				it->second++;
		}

		ll mx=INT_MIN;
		for(auto it: mp){
			// cout<<it.first<<" "<<it.second <<'\n';
			if(it.second > mx)
				mx = it.second;
		}

		ll ans= n-mx;

	// cout<<ans<<endl;
		if(n<=2) ans=0;
		if(n==3){
			if(mp.size()>1)
				ans=1;
			else ans=0;
		}
		cout<<ans<<'\n';

	}
	return 0;
}