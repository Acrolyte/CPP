#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n,k;
	cin>>n>>k;
	k--;
	if(k<n/2) {
		k = k << 1;
		k++;
		cout << k << endl;
	}
	else{
		k++;
		k = k-n/2;
		k = k<<1;
		cout<< k << endl;
	}
	return 0;
}