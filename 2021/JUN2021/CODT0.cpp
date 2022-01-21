#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,s1,s2;
	cin >> t;
	string s;
	while(t--){
		cin >> s >> s1 >> s2;
		if(s=="triangle"){
			cout << s1*s2;			
		}
		else if(s=="square"){
			int v = 0.5*s1*s2;
			cout << v;
		}
		else if(s=="rectangle"){
			cout << s1*s2;
		}
		else cout << 0;
		cout << endl;
	}
	return 0;
}