#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y,i,a;
	cin >> n >> x;
	set<int> s;

	for(i=0;i<x;i++){
		cin >> a;
		s.insert(a);
	}
	cin >> y;
	for(i=0;i<y;i++){
		cin >> a;
		s.insert(a);
	}
	
	// for(auto it : s)
	// 	cout << it << " " << endl;

	auto it=s.begin();
	for(i=1;it!=s.end() || i<=n;++it,++i){
		// cout << *it << " " << i << endl;
		if(*it!=i){
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";

	return 0;
}