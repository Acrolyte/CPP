#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ce(x,y) ceil(x/y)

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll tmp = a,s=INT_MIN;
		a = min(a,b);
		b = max(tmp,b);
		tmp=0;
		ll p,q;
		
		for(ll i=a;i<=b;i++){
			p = ce((b-i),2);
			q = ce((i-a),2);
			tmp = p+q;
			if(s<tmp)
				s = tmp;
		}
		cout<<s<<endl;

	}
	return 0;
}