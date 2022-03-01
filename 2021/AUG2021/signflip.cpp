#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){

		int n,k;
		cin>>n>>k;

		int A[n]={};
		vector<int> v;
		int sum=0;
		for (int i = 0; i < n; ++i){
			cin>>A[i];
			if(A[i]<0)
				v.push_back(A[i]*-1);
			else sum += A[i];
		}
		v.push_back(0);
		sort(v.rbegin(), v.rend());

		for(int i=0; i<k and i<v.size(); i++){
			sum += v[i];
		}
		cout<<sum<<'\n';
	}
	return 0;
}