#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=0,l=s.length();
		int mp[26]={};
		int mpo[26]={};

		for(i=0;i<l/2;i++){
			mp[s[i]-'a']++;
		}
		i = l/2;
		if(l%2!=0) i++;
		for(;i<l;i++){
			mpo[s[i]-'a']++;
		}
		bool t = true;
		
		for(i=0;i<26;i++){
			if(mp[i] != mpo[i]){
				t = false;
				break;
			}
		}
		if(t) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}