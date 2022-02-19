#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c and (b+c)>a and (c+a)>b){
		if(a==b and b==c) cout<<1;
		else if((a==b and c!=a ) or (b==c and c!=a) or (a==c and c!=b))
				cout<<2;
		else cout<<3;
		return 0;
	} else cout<<"-1";
	return 0;
}