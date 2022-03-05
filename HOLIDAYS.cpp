#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,w,i,x;
		cin>>n>>w;
		vector<int> v;

		for(i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		sort(v.rbegin(), v.rend());

		int c = 0,sum = 0;
		for(i=0;i<n;i++){
			sum += v[i];
			c++;
			if(sum >= w)
				break;
		}
		cout<<(n-c)<<'\n';
	}
	return 0;
}