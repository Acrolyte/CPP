#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n>>a;
		int l = floor(sqrt(n));
		cout<<a*l<<endl;
	}
	return 0;
}