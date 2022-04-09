#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,l,h;
	cin >> t;
	
	string s;
	while(t--){
		cin>>l>>h>>s;
		int n=0,flag=0;
		vector<int> v;

		int c=0,max=0;
		for(auto i: s){
			if(i=='0') c++;
			if(i=='1'){
				if(c!=0)
				v.push_back(c);
				c=0;
			}
		}
		if(c!=0)
		v.push_back(c);

		// sort(v.rbegin(), v.rend());
		// for(auto i: v){
		// 	cout << i << endl;
		// }

		for(auto i : v){
			// cout << "N= " << n<< " H= " << h<<endl;

			if(h-i==0){
				cout << "YES"<< endl;
				flag = 1; 
				break;
			}
			else{
				h = 2*(h-i);
			}
		}
		if (flag==0)
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}