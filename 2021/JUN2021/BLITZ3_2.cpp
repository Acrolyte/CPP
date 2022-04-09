#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a,b;
	cin >> t;
	while(t--){
		cin >> n >> a >> b;
		n  = 2*(180+n);
		cout << n-(a+b); 
		cout << endl;
	}
	return 0;
}