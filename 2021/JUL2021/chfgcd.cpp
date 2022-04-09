#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll x, ll y){
	if(x<y) swap(x,y);
	if(x==0) return y;
	if(y==0) return x;
	if(!(x&1) && !(y&1)) 
		return gcd(x>>1,y>>1)<<1;
	else if(!(y&1))
		return gcd(x,y>>1);
	else if(!(x&1))
		return gcd(x>>1,y);
	else
		return gcd(y,x-y);
}

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll x,y,tmp,g,ans=0;
		cin>>x>>y;
		tmp = x;
		x = min(x,y);
		y = max(tmp,y);
		cout<<"y mod x"<<(y%x)<<endl;

		if(gcd(x,y)<=1){
			ans = min( x-(y%x), y-(x%y));
		}

		cout<<ans;
		cout<<endl;
	}
	return 0;
}