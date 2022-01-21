#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t,n,k,i,x,j;
	cin >> t;

	while(t--){
		cin >> n >> k;
		vector<ll> v;
		for(i=0;i<n;i++){
			cin >> x;
			v.push_back(x);
		}
		sort(v.rbegin(), v.rend());
		ll s1=0,s2=0;

		for(i=0,j=0;i<n-1 && j<k;i=i+2,j++){
			s1 = s1 + v[i];
			s2 = s2 + v[i+1];
		}
		s2 = s2 + v[2*j];
		cout << max(s1,s2) << endl;	
	}

	return 0;
}