#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,i,x;
	cin >> t;
	while(t--){
		cin >> n >> m;
		set<pair<int,int>> a;
		set<pair<int,int>> b;

		for(i=0;i<n;i++){
			cin >> x;
			auto it = a.find({x,INT_MAX});
			pair<int,int> p = *it;
			if(it!=a.end()){
				p.second++;
			}
			else{
				p.first = x;
				p.second++;
			}
		}
		for(i=0;i<m;i++){
			cin >> x;
			auto it = b.find({x,INT_MAX});
			pair<int,int> p = *it;
			
			if(it!=b.end()){
				p.second++;
			}
			else{
				p.first = x;
				p.second++;
			}
		}
		for(auto i : a){

			if(i.first%3==0 && i.second==1){
				auto it = b.find({i.first,INT_MAX});
				pair<int,int> p = *it;				
				if(it!=b.end() && p.second==1)
					cout << p.first << " ";
			}
		}

	}
	return 0;
}