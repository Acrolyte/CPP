#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,y;
	cin>>t;
	while(t--){
		int sa=0,sb=0;
		for(int i=0;i<5;i++){
			cin>>x>>y;
			sa+=x;
			sb+=y;
		}

		if(sa>sb) cout<<1;
		else if(sb>sa) cout<<2;
		else cout<<0;
		cout<<endl;
	}
	return 0;
}