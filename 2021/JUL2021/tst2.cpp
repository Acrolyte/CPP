#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;
	cin>>t;
	ll n;
	while(t--){
		cin>>n;
		vector<ll> v;
		set<ll> s;
		ll i,x;
		for(i=1;i<=n;i++){
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());

		string ans ="YES";
		for(i=0;i<n;i++){
			if(v[i]!= v[i+1]){
				if(i+1 != v[i]){
					ans = "NO";
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}