#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,i,j;
	string s;
	cin>>n>>t>>s;

	while(t--)
	for(i=0;i<n-1;i++){
		int a=i,b=i+1;

		if(s[a]!=s[b] )
			swap(s[a],s[b]);

		// cout<<"a= "<<a<<" B= "<<b<<endl;
	}

	cout<<s;


	return 0;
}