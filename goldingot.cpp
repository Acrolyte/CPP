#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	const unsigned int M = 1000000007;
	ll g,x,b,h,n;
	cin>>g>>b>>h;
	n=g;
	vector<ll> v;
	ll sum =0;
	while(n--){
		cin>>x;
		sum += x;
		v.push_back(x);
	}
	ll i,j;
	ll mx = 0;
	for(i=0;i<g;i++){
		ll p=1;

		for(j=i-1;j>=0;j--){
			// cout<<v[j]<<' ';
			if(v[j]>=v[i])p++;
			else break;
		}

		for(j=i+1;j<g;j++){
			// cout<<v[j]<<' ';
			if(v[i]<=v[j]) p++;
			else break;
		}

		mx = max(mx,(p*v[i]));
		// cout<<"\n i= "<<i<<" mx = "<<mx<<" p =  "<<p<<endl;
	}
	// cout<<sum<<" "<<mx<<endl;
	unsigned ll ans = ((sum-mx)*b*h) % M;
	cout<< ans;
	return 0;
}