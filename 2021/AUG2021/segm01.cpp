#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;

		int l=s.length();
		char ch=s[0],ch1;
		vector<char> v;
		
		v.push_back(ch);
		for(int i=0;i<l;i++){
			ch1 = s[i];
			if(ch!=ch1){
				v.push_back(ch1);
				ch = ch1;
			}
		}
		int x=0;
		for(auto it:v){
			// cout<<it<<" ";
			if(it=='1') x++;
		}
		// cout<<'\n';
		string str="YES";
		if(x!=1) str = "NO";
		cout<<str<<"\n";
	}
	return 0;
}