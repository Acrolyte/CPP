#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r,c,i,j;
	cin>>r>>c;
	vector<vector<char>> v;

	char x;
	for(i=0;i<r;i++){
		vector<char> v1;
		for (j = 0; j < c; ++j)
		{
			cin>>x;
			v1.push_back(x);
		}
		auto it = find(v1.begin(), v1.end(),'S');
		if(it!=v1.end())
			v.push_back(v1);
	}

	if(v.size()==0){
		cout << r*c;
		return 0;
	}
	vector<vector<char>> v2;
	for(i=0;i<c;i++){
		vector<char> v1;
		for(j=0;j<v.size();j++){
			v1.push_back(v[j][i]);
		}
		auto it = find(v1.begin(), v1.end(),'S');
		if(it!=v1.end())
			v2.push_back(v1);
	}

	cout<<(r*c)-v2[0].size()*v2.size();
	return 0;
}