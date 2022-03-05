#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string ind="";
		cin>>n>>ind;
		int c = 0; 
		while(n--){
			string s = "";
			cin>>s;
			int x;
			if(s == "CONTEST_WON"){
				cin>>x;
				c += 300;
				if(x<20) c += (20-x);
			}
			else if(s == "TOP_CONTRIBUTOR")
				c += 300;
			else if(s == "BUG_FOUND"){
				cin>>x;
				c += x;
			}
			else if(s == "CONTEST_HOSTED")
				c += 50;
		}
		if(ind == "INDIAN"){
			cout<< c/200;
		} else cout<< c/400;
		cout<<'\n';
	}
	return 0;
}