#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	getline(cin,s);
	deque<char> v;

	int ans = 0;

	cout << s;
	for(auto it: s){
		if(v.size()==n) ans++;
		else{
			if(it==v[0]) v.pop_front();
			else if(it==v[1]) {
				char ch = v[2];
				v.pop_back();
				v.pop_back();
				v.push_back(ch);
			}
			else if(it==v[2]) v.pop_back();
		}
		for(auto i : v)
			cout << i << " ";
		cout << it << endl;
	}
	cout << ans;
	return 0;
}