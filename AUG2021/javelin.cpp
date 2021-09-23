#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,x,tmp;
		cin>>n>>m>>x;
		vector<pair<int,int>> v;

		for (int i = 0; i < n; ++i)
		{
			cin>>tmp;
			v.push_back({tmp,i+1});
		}

		sort(v.rbegin(), v.rend());

		vector<int> ans;

		for(auto it: v){
			if(it.first>=m || x>0){
				ans.push_back(it.second);
				x--;
			}
		}

		sort(ans.begin(), ans.end());

		cout<<ans.size()<<" ";
		for(auto it : ans){
			cout<<it<<" ";
		}
		cout<<endl;


	}
	return 0;

}