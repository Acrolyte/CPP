#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int i,j;
	int b[n][m];

	for (i = 0; i < n; ++i){
		for(j=0; j<m; ++j){
			cin<<a[i][j];
			b[i][j]=1;
		}
	}
	
	

	
	return 0;
}