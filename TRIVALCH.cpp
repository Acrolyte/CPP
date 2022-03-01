#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c and (b+c)>a and (c+a)>b)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}