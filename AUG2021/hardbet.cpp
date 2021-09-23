#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;

		if(c<b and c<a)
			cout<<"Alice";
		else if(b<c and b<a)
			cout<<"Bob";
		else cout<<"Draw";
		cout<<'\n';

	}
	return 0;
}