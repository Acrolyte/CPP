#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,c,m,x,i,tmp;
	cin>>n>>c;
	vector<int> s;

	for(i=0;i<n;i++){
		cin>>x;
		s.push_back(x);
	}

	vector<int> v;
	for(i=1;i<n;i++){
		tmp = s[i-1]-s[i]-c;
		if(tmp>0)
		v.push_back(tmp);
	}
	if(v.size()==0){
		cout<<0;
		return 0;
	}
	sort(v.rbegin(), v.rend());
	cout<<v[0];
	return 0;
}