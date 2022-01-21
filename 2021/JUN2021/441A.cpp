#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	ll n,v,p,k,i,j;
	cin>>n>>v;

	vector<ll> s;

	for(j=1;j<=n;j++){
		cin>>k;
		vector<ll> va;
		for(i=1;i<=k;i++){
			cin>>p;
			va.push_back(p);
		}
		for(auto it: va){
			if(v>it){
				s.push_back(j);
				break;
			}
		}
	}

	sort(s.begin(), s.end());
	cout<<s.size()<<endl;
	for(auto i:s)
		cout << i << " ";


	return 0;
}