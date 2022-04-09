#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,n;
	cin >> s >> n;
	int i;
	vector<pair<int,int>> se;

	for(i=0;i<n;++i){
		pair<int,int> p;
		cin >> p.first >> p.second;	
		se.push_back(p);
	}
	sort(se.begin(), se.end());
	for(auto it: se){
		if(s<=it.first){
			cout << "NO";
			return 0;
		}else{
			s = s+it.second;
		}
	}
	cout << "YES";
	return 0;
}