#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	vector<vector<char>> v;

	char x;
	for(i=1;i<=n;i++){
		vector<char> v1;
		for(j=1;j<=n;j++){
			cin>>x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int tmp =0;
			if(i>0 and v[i-1][j]=='o') tmp++;
			if(i<n-1 and v[i+1][j]=='o') tmp++;
			if(j>0 and v[i][j-1]=='o') tmp++;
			if(j<n-1 and v[i][j+1]=='o') tmp++;
			if(tmp%2!=0){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}