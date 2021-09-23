#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,x;
	cin >> t;
	while(t--){
		cin >> n;
		int v[n];

		for(i=0;i<n;i++){
			cin >> v[i];
		}
		// for(auto it : v)
		// 	cout << it << " ";
		for(i=0;i<(n/2);++i){
			if(v[i]!=0)
				cout << v[i] << " " ;
			if(v[n-i-1]!=0) 
				cout << v[n-i-1] << " ";
		}
		if(n%2==1)
			cout << v[n/2];
		
		cout << endl;
	}
	return 0;
}