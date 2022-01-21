#include <bits/stdc++.h>
using namespace  std;

int main(){
	string s;
	cin >> s;
	string ans = "YES";
	for(int i=0;i<=s.size()/2;++i){
		if(s[i]!=s[s.size()-i-1]){
			ans = "NO";
			break;
		}
	}
	cout << ans;
}