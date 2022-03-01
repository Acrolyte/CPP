#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,i;
	cin >> t;
	vector<pair<int,int>> v1;
	vector<pair<int,int>> v2;
	vector<pair<int,int>> v3;

	for (i = 1; i <=t; ++i){
		cin >> x;
		if(x==1)
			v1.push_back({x,i});
		else if(x==2)
			v2.push_back({x,i});
		else
			v3.push_back({x,i});
	}
	int mi =  min(min(v1.size(),v2.size()),v3.size());
	cout << mi << endl;

	for(i=0;i<mi;++i){
		cout << v1[i].second << " "<< v2[i].second << " "<< v3[i].second << " " << endl; 
	}

	return 0;
}