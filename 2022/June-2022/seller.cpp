#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){

	ll n,x=0; cin>> n;
	vector<ll> v;
	ll sum = 0;

	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
		sum += x;
	}

	vector<ll> v2 = v;

	sort(v.begin(), v.end());

	ll gm = 0, rm = 0;
	for(int i=0;i<n;i++){
		if(v[i] == v2[i])
			gm += v[i];
	}
	 rm = sum - gm;

	cout<< gm - rm;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();

	return 0;
}