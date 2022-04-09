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
		ll tmp = n;
		ll sum =0;
		vector<ll> v;

		while(n--){
			ll x;
			cin>>x;
			v.push_back(x);
			sum += x;
		}

		ll sum1 = sum, sum2=0, ans = sum;

		for(ll i = 0;i<tmp;i++){
			sum2 += v[i];
			ans = min(ans , max(sum2 , sum - sum2));
			// cout<<sum2<<" "<<sum-sum2<<endl;
		}

		cout<<ans<<'\n';
	}
	return 0;
}