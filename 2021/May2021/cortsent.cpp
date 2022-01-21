#include <bits/stdc++.h>
using namespace std;


int check(string s)
{
	int flag=0,flag2=0;
	// cout << s[0] << endl;
	if(s[0]>= 'a' && s[0]<='m')
		flag = 1;
	else if ( s[0] >= 'N' && s[0]<='Z')
		flag = 2;

	for(auto it : s){
		if( it >= 'a' && it<='m' ){
			flag2 = 1;
		}
		else if( it >= 'N' && it<='Z' ){
			flag2 = 2;
		}
		else flag2 =0;
		// cout << flag <<  " " << flag2 << endl;
		if(flag != flag2)
			return 0;
	}

	return flag;
}

int main()
{
	int t,k;
	cin >> t;
	vector<string> v;

	while(t--){
		cin >> k;
		string x;

		for(int i=0;i<k;i++){
			cin >> x;
			v.push_back(x);
		}
		

		int flag=0;
		for(auto it : v){
			// cout << it << endl;
			flag = check(it);
			if(flag == 0) {
				cout << "NO" << endl;
				break;
			}

		}

		if(flag>0)
			cout << "YES" << endl;
		v.clear();
	}
	return 0;
}