#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,k;
	cin>>n>>k;

	vector<ll> v;
	ll f,t;
	while(n--){
		cin>>f>>t;
		if(t>k) v.push_back(f-(t-k));
		else v.push_back(f);
	}

	sort(v.rbegin(), v.rend());
	cout<<v[0];

	return 0;
}