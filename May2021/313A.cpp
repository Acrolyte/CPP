#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a=0;
	cin >> n;
	if(n<0){
		a = 1;
		n = abs(n);
		string s = to_string(n);
		string s1 = s.substr(0,s.size()-1);
		string s2 = s.substr(0,s.size()-2) + s.substr(s.size()-1);
		int n1 = stoi(s1);
		int n2 = stoi(s2);
		int ans = min(n1,n2);
		ans = 0 - ans;
		cout << ans;
		return 0; 
	}
	else cout << n;

	return 0;
}