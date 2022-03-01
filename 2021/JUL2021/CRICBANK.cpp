#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	ll ra,wa,ca,rb,wb,cb;
	ll a=0,b=0;
	while(t--){
		a=0;
		b=0;
		cin>>ra>>wa>>ca>>rb>>wb>>cb;
		// cout<<a<<" " <<b<<endl;
		if(ra>rb) a++;
		else  b++;

		if(wa>wb) a++;
		else  b++;

		if(ca>cb) a++;
		else b++;

		if(a>b) cout<<"A"<<endl;
		else cout<<"B"<<endl;
	}

	return 0;
}