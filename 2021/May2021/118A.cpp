#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::tolower);

	int i,l=s.length();
	char ch;
	string ans;
	for (i = 0; i < l; ++i)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u' || s[i] == 'y'){
		}else{
			cout <<'.' << s[i];
		}
	}
	return 0;
}