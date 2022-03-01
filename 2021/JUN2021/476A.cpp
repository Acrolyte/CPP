#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	if(n<m){
		cout << -1 ;
		return 0;
	}
	int l = n/2+n%2;
	cout << (l+m-1)/m*m ;
	return 0;
}