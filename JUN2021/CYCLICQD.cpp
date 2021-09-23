#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,c,d;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		if(a+c==180 && b+d==180)
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}