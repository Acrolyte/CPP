#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,t;
	cin>>n>>m>>t;

	vector<pair<int,int>> v;

	while(m--){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}

	while(t--){
		for(auto &i: v){
			i.first += i.second;
		}
	}
	sort(v.begin(), v.end());
	for(auto i: v)
		cout<<i.first<<' ';
	return 0;
}