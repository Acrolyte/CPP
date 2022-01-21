#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){

		int n,k,s;
		cin>>n>>k>>s;

		int l=k-1,sum=0;

		for(int i=0;i<n;i++){
			sum += i*2+1;
		}
		cout<<(s-sum)/l<<'\n';
	}
	return 0;
}