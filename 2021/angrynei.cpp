#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;

	int l = s.length();

	for(int i=0;i<l-1;i++){
		if(s[i] == s[i+1]){

			// cout<<s<<s.length()<<'\n';
			s = s.substr(0,i) + s.substr(i+2);
 			i = 0;
			l = s.length();
		}
	}
	if(s[0] == s[1]) cout<<"PEACE";
	else cout<<s;
	return 0;
}