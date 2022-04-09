#include <bits/stdc++.h>
using namespace std;

string lexicographicallyLargest(int n, string &s){
	int i=0,k=0;
	char ch = s[0];
	string ss = s;
	for(auto it: s){
		if(ch <= it){
			k = i;
			ch = it;
		}
		i++;
	}
	string s1 = s.substr(0,k+1);
	string s3 = s1;
	string s2 = s.substr(k);
	reverse(s1.begin(), s1.end());

	if(s1>s3){
		s1 += s2;
	}
	reverse(ss.begin(), ss.end());

	cout<<s1<<endl<<ss<<endl<<s<<endl;
	return max(s1,max(ss,s));
}

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	cout<<lexicographicallyLargest(n,s)<<endl;
}


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    solve();

	return 0;
}