#include <bits/stdc++.h>
using namespace std;


int diff(set<int> s, int it){
	int m=INT_MIN,cal=0;
	s.erase(it);
	auto last = s.end();

	for (auto i = s.begin(); i != last ; ++i){
		auto sm = i;
		auto la = i;
		++la;
		cal = *la-*sm;
		// cout << *sm << " ";
		if(m<cal)
			m = cal;
	}
	// cout << endl;
	return m;
}
int main()
{
	int n,tmp;
	cin>>n;
	tmp=n;
	set<int> s;
	int x,ans = INT_MAX,cal;
	
	while(tmp--){
		cin>>x;
		s.insert(x);
	}
	int i=0;
	auto st = s.begin();
	auto en = s.end();
	st++;
	--en;
	for(; st != en; ++st){		
		tmp = *st;
		// cout << tmp << endl;
		cal = diff(s,tmp);
		if(ans>cal)
			ans = cal;
		// cout << cal << endl;
	}
	cout << ans;

	return 0;
}