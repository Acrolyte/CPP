#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n,x; cin>>n;
	vector<ll> v;
	ll flag = 0;

	for(int i=0;i<n;i++){
		cin>>x;
		if(x>0) flag = 1;
		if(flag==1)
		v.push_back(x);
	}


	sort(v.rbegin(), v.rend());

	// for(auto i: v) cout<<i<<endl;

	ll s = 0,c=0;
	for(int i=0;i<v.size();i++){
		s += v[i];
		if(s>=0){
			c++;
		} else break;
	}
	cout<<c;
	return 0;
}
