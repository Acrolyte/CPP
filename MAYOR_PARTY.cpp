#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		cout<<max(b,(a+c))<<'\n';
	}
	return 0;
}