#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,a,b;
	cin >> n;
	vector<pair<int,int>> s;
	for(i=0;i<n;++i){
		cin >> a >> b;
		s.push_back({a,b});
	}
	int ans=0;
	for(auto it : s){
		a = it.first;
		for(auto it2 : s){
			b = it2.second;
			if(a==b)
				ans++;
		}
	}
	cout << ans;
	return 0;
}