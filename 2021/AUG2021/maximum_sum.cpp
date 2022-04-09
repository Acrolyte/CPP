#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n;
	cin>>n;
	ll a[n]={};
	ll sum=0,v=0,mx=-(1e9);

	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
		if(a[i]>=0){
			sum+=a[i];
			v++;
		}
        if(mx < a[i]) mx = a[i];
	}
    if(v==0)
    	cout<<mx<<" "<<1;
    else
	    cout<<sum<<" "<<v;

	return 0;
}