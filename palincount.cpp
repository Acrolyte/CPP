#include <bits/stdc++.h>
using namespace std;
#define ll long long

int checkpalin(string s, int x){
	int l = s.length();
	if(x==1) return l;
	int ans = 0;
	for(int i=0;i<l-x+1;i++){
		string s1 = s.substr(i,i+x);
		string s2 = string(s1.rbegin(),s1.rend());
		if(s1 == s2)
			ans++;
	}
	return ans;
}
int main(){
	int n,m,x;
	cin>>n;
	cin.ignore();
	string s = "";
	getline(cin,s);
	cin>>m;

	int sum = 0;
	while(m--){
		cin>>x;
		sum += checkpalin(s,x);
	}
	cout<<sum;
	return 0;
}