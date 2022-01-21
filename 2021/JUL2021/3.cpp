#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n,x;
	cin>>n;
	vector<ll> v;
	vector<ll> s1;
	vector<ll> s2;

	ll a=0;
	s1.push_back(0);
	for(ll i = 0; i<n;i++){
		cin>>x;
		a = a+x;
		v.push_back(x);
		s1.push_back(a);
	}
	a=0;
	for(ll i=n-1; i>=0; i--){
		x = v[i];
		a = a+x;
		s2.push_back(a);
	}
	s2.push_back(0);
	sort(s2.rbegin(), s2.rend());

	ll m=INT_MAX,ans=0;
	for(ll i = 1; i<n;i++){
		x = s2[i]-s1[i];
		// cout << m <<" "<< x<< endl;
		if(m>abs(x)){
			m = x;
			ans++;
		}
	}
	cout<<ans<<" " <<n-ans;
	return 0;
}