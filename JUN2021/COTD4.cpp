#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin >> s;
	for(auto i : s){
		if(i=='B'||i=='C'||i=='D'||i=='E'||i=='F'||i=='G'||i=='J'||i=='K'||i=='L'||i=='N'||i=='P'||i=='Q'||i=='R'||i=='S'||i=='Z')
		{
			cout << "NO" ;
			return 0;
		}
	}

	for(int i=s.length()-1;i>=0;i--)
		t.push_back(s[i]);
	// cout << t << endl <<s << endl;
	if(t==s) cout << "YES";
	else cout << "NO";
	return 0;
}