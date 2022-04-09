#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(a,b) floor(a/b)

int main()
{
	ll t;
	cin>>t;
	ll e,k;
	while(t--){
		cin>>e>>k;
		ll s = (ll) fl(e,k);
		ll c=0;
		while(s!=0){
			c++;
			s = (ll) fl(s,k);
		}
		cout<<++c<<endl;
		// cout <<"s="<< s<<endl;
	}

	return 0;
}