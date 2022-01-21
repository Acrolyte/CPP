#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){
		int a,b,c,s=0;
		cin>>a>>b>>c;
		if(a==0 or b==0 or c==0) s++;
		if(a==1 or b==1 or c==1) s++;
		if(s==2) cout<<1;
		else cout<<0;
		cout<<endl;
	}
	return 0;
}