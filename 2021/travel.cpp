#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;

		set<pair<int,int>> v;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			v.insert({x,i+1});
		}


		int sum=0;
		for(auto i: v){
			cout<<i.first<<' '<<i.second<<'\n';
			// sum += v[i+1].second - v[i].second;
			// i++;
		}
		cout<<sum<<'\n';
	}

	return 0;
}