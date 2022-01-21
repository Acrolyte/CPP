#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int m = max((3*a)/10,a-(a/250)*c);
	int n = max((3*b)/10,b-(b/250)*d);
	if(m==n) cout<<"Tie";
	else{
		cout<< (m>n ? "Misha" : "Vasya");
	}
	return 0;
}