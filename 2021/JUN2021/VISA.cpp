#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x1,x2,y1,y2,z1,z2;
	cin >> t;
	string ans = "YES";
	while(t--){
		ans = "YES";
		cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
		if(x2<x1 || y2<y1 || z1 < z2)
			ans = "NO";
		cout << ans << endl;
	}
	return 0;
}