#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,tmp;
	cin>>n;
	tmp=n;
	vector<pair<int,int>> v;
	int x,y,x1,y1,t=0;

	while(tmp--){
		cin>>x>>y;
		v.push_back({x,y});
	}

	for(auto p : v){
		x= p.first;
		y= p.second;

		bool a=false,b=false,c=false,d=false;

		for(auto i : v){
			x1=i.first;
			y1 = i.second;
			if(x1>x and y1==y) a=true;
			if(x1<x and y1==y) b=true;
			if(x1==x and y1>y) c=true;
			if(x1==x and y1<y) d=true;
		}
		if(a and b and c and d){
			t++;
			a=false,b=false,c=false,d=false;
		}
	}

	cout<<t;

	return 0;
}