#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t,n,x,val;
	cin>>t;

	while(t--){
		cin>>n;
		map<ll,ll> m;

		for(ll i=0;i<n;i++){
			cin>>x;
			auto it = m.find(x);
			if(it!=m.end())
				(it->second)++;
			else m.insert({x,1});
		}

		ll ans=0;
		for(auto it : m){
			val = it.second;
			ans = ans+val * (n-val);
		}
		cout<<ans<<endl;
	}
	return 0;
}