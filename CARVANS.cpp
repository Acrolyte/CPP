#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int a[n]={};
		for(i=0;i<n;i++)
			cin>>a[i];
		int c=1;
		for(i=1;i<n;i++){
			if(a[i]>a[i-1])
				a[i] = a[i-1];
			else c++;
		}
		cout<<c<<'\n';
	}
	return 0;
}