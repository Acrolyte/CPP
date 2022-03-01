#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,c,i;
	cin >> n >> m;
	vector<int> v;

	for(i=0;i<m;i++){
		cin >> c;
		v.push_back(c);
	}
	sort(v.rbegin(), v.rend());
	int min = INT_MAX;
	for(i=0;i<=m-n;i++){
		if(abs(v[i]-v[i+n-1])<min)
			min = abs(v[i]-v[i+n-1]);
	}
	cout << min;
	return 0;
}