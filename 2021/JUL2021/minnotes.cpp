#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n;
		vector<ll> v;

		ll den=0,sm=INT_MAX,la=INT_MIN,sm1=0,la1=0;

		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			v.push_back(x);
			if(sm>x){
				sm = x;
				sm1 = i;
			}
			if(la<x){
				la1 = i;
				la = x;
			}
			// cout << "sm= " << sm << " la= " << la<<endl;
		}

		v[la1] = v[sm1];

		// for(int i=0; i<n; i++)
		// 	cout << v[i] << " ";
		for (int i = 0; i < n; ++i){
			den += v[i]/sm;
		}
		cout << den <<endl;

	}
	return 0;
}