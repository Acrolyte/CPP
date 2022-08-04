#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,x=0;
	cin>>n;
	ll prev = 0;
	ll ans = 0;
	vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>prev)
			ans += x-prev;
		prev = x;
	}
	cout<<ans;
	return 0;
}