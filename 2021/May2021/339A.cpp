#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	sort(a.begin(), a.end());
	string ans;
	for(int i=0;i<a.length();++i){
		if(a[i]!='+')
			ans = ans + a[i] + '+';
	}
	ans = ans.substr(0,ans.length()-1);
	cout << ans;
	return 0;
}