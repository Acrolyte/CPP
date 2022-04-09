#include <bits/stdc++.h>
using namespace std;

vector<pair <char,int>> cmprs_string(string arr){
	vector<pair <char,int>> res;

	for(int i=0;i<arr.length();i++){

		if(res.size()== 0 ) res.push_back({arr[i],1});
		else{
			if(arr[i] == res[res.size()-1].first) res[res.size()-1].second++;
			else res.push_back({arr[i],1});
		}
	}
	return res;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin>>t;

	while(t--){
		int l,h; cin>>l>>h;
		bool ok = false;
		string s; cin>>s;

		vector< pair<char, int> > v = cmprs_string(s);

		for(auto [ch , cnt] : v)
		{
			if(ch == '1') continue;
			ok |= cnt >= h;
			if(ok) break;
			if(cnt > h/2) h = 2 * (h-cnt);
		}
		cout << (ok ? "YES" : "NO")<<'\n';
	}

	return 0;
}