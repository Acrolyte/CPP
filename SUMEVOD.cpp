
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll se=0,so=0,n,i;
	cin>>n;
	for(i=1;i<2*n;i=i+2){
		so += i;
		se += i+1;
	}
	cout<<so<<' '<<se;
	return 0;
}