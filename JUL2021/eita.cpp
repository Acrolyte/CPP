#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int d,x,y,z;
		cin>>d>>x>>y>>z;
		int m1 = x*7;
		int m2 = y*d + (7-d)*z;
		cout<<max(m1,m2)<<endl;
	}
	return 0;
}