#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,i,j;
	string s;
	cin>>n>>t>>s;

	while(t--)
	for(i=0;i<n;i++){
		int a=i,b=i+1;

		if(s[a]=='B' and s[b]=='G'){
			swap(s[a],s[b]);
			i++;
		}

	}

	cout<<s;


	return 0;
}