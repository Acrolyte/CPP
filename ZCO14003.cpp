#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,t,x,i;
	cin>>n;
	t = n;
	vector<ll> v;
	while(t--){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	ll mi =0;
	for(i=0;i<n;i++){
		mi = max(mi, v[i]*(n-i));
	}
	cout<<mi;
	return 0;
}