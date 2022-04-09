#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,tmp,i,j;
	cin>>n;
	vector<pair<int,int>> v;
	tmp=n;

	int x,y;
	while(tmp--){
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(), v.end());

	int l=v.size();
	// for(i=0;i<l;i++)
	// cout<<v[i].first<<" "<<v[i].second<<endl;
	
	for(i=0;i<l-1;i++){
		x=v[i].first;
		y=v[i].second;
		if(x<v[i+1].first and y>v[i+1].second){
				cout<<"Happy Alex";
				return 0;
		}
	}
	cout << "Poor Alex";
	return 0;
}