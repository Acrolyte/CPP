#include <bits/stdc++.h>
using namespace std;

int basech(string s){
	int sum=0,i;
	for(i=0;i<s.size()-1;++i){
		if(s[i]==s[i+1]) sum = sum+2;
		else sum = sum +1;
	}
	return sum;
}

int main()
{
	int t,n,k,i,x;
	cin >> t;
	string s;
	while(t--){
		cin >> n >> k;
		cin >> s;
		int val;
		for(i=0;i<k;i++){
			cin >> x;
			char ch = s[x-1];
			string w = s.substr(0,x);
			s =
			cout << ch  << " "<< s << " " << basech(s) << endl;
		}

	}
	return 0;
}