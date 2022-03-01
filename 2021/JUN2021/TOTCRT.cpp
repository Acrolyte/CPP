#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,x;
	cin >> t;
	string s;
	while(t--){
		cin >> n;
		map<string, int> m;
		vector<int> v;
		for(i=0;i<3*n;i++){
			cin >> s >> x;
			auto itr = m.find(s);
			itr->second += x;
			m.insert({s,x});
		}
		for(auto it : m){
			v.push_back(it.second);
		}
		sort(v.begin(), v.end());
		for(auto j:v)
			cout << j << " ";
		cout << endl;
	}
	return 0;
}