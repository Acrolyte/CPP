#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k,i;
	cin >> n >> k;
	if(n%2!=0) n++;
	if(k<=n/2){
		k = k*2;
		k = k-1;
		cout << k;
	}
	else
	{		
		k = k-n/2;
		k=k<<1;
		cout << k << endl;
	}
	return 0;
}