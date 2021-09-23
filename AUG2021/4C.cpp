#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int hsh[N];

int main()
{
	int n,i;
	cin>>n;

	unordered_map<string,int> mp;

	for(i=0;i<n;i++){
		string s;
		cin>>s;

		if(mp.find(s)!=mp.end()){
			mp[s]++;
			cout<<s<< mp[s]<<"\n";
		} else {
			mp[s]=0;
			cout<<"OK\n";
		}
	}

	return 0;
}