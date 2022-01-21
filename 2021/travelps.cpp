#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;++i)
#define repr(i,k) for(i=k;i>0;--i)


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;

		int z=0,y=0;
		for(auto i : s){
			if(i=='0')
				z++;
			else y++;
		}

		cout<<(z*a + y*b)<<'\n';
	}

	return 0;
}