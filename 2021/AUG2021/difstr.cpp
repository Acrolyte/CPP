#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// vector<string> vs;
		int a[n]={};
		int b[n]={};


		for(int j=0;j<n;j++){
			string s;
			cin>>s;
			// cout<<s<<'\n';
			for(int i=0;i<n;i++){
				if(s[i]=='1')
					b[i]++;
				else
					a[i]++;
			}
		}
		string ans="";

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" "<<b[i]<<endl;
		}
		for(int j=0;j<n;j++){
			if(a[j]>b[j])
				ans.push_back('1');
			else
				ans.push_back('0');
		}

		cout<<ans<<'\n';
	}
	return 0;
}