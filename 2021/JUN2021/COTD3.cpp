#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,s,d,c;
	cin>>n>>s;
	vector<pair<int,int>> v;

	int ma =0,val;
	for(i=0;i<n;i++){
		cin>>d>>c;
		val = 100-c;
		if(d<s){
			if(val>ma && val<100) ma = val;
		}
		v.push_back({d,c});
	}

	if(v.empty()){
		cout <<-1;
		return 0;
	}

	cout<< ma;
	return 0;
}