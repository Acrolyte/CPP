#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){

		int n,x;
		cin>>n>>x;
		int a[n]={},b[n]={};

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			b[i] = a[i] xor x;
		}

		for(auto i : b)
			cout<<i<<' ';
		cout<<endl;

	}
	return 0;
}