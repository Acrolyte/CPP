#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k>> l >> c >> d >> p >> nl >> np;
	//3 4 5 10 8 100 3 1
	int ans = min((k*l)/nl,min((c*d),(p/np)));
	ans = ans/n;
	cout<<ans;
	return 0;
}