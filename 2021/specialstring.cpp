#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool special(string s){
	ll s1 = 0, s2 = 0 ,i = 0;
	for(auto it : s){
		if(i==0){
			s1 += it;
			i++;
		}else{
			s2 += it;
			i--;
		}
	}
	ll d = abs(s1 - s2);
	if(d==0) return false;
	if(d%2==0 or d%3==0 or d%5==0 or d%7==0)
		return true;
	return false;
}

int main(){

	string s;
	cin>>s;

	if(special(s)){
		cout<<"yes";
	}
	else cout<<"no";
	return 0;
}