#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;
		int a[n] = {};
		int e1=0,e2=0,o1=0,o2=0;

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(i%2==0) e1++;
			else o1++;
			if(a[i]%2==0) e2++;
			else o2++;
			// b[i] = (a[i]+i+1)%2;
		}

		cout<<min(e1,e2)+min(o1,o2)<<'\n';


	}
	return 0;
}