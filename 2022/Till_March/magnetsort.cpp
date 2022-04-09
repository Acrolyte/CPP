#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tmp = n;
		vector<int> v;
		while(tmp--){
			int x;
			cin>>x;
			v.push_back(x);
		}
		cin.ignore();
		string s;
		cin>>s;
		cout<<s<<endl;
	}
	return 0;
}