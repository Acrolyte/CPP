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
	ll l,r;
	cin>>l>>r;
	if (r-l<2)
	{
		cout<<-1;
		return 0;
	}

	ll a,b,c;
	for(a=l;a<=r-2;a++){
		for(b=a+1;b<=r-1;b++){
			for(c=b+1;c<=r;c++){
				if(gcd(a,b)==1 and gcd(b,c)==1 and gcd(a,c)>1){
					cout << a << " " << b << " " << c;
					return 0;
				}
			}
		}
	}
	cout<<-1;
	return 0;
}