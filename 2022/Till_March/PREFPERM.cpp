<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i;
		cin>>k>>n;

		vector<int> v;
		for(i=1;i<=k;i++)
			v.push_back(i);
		
		for(i=0;i<k;i++){
			for(auto it: v)
				cout<<it<<' ';
			cout<<'\n';
			next_permutation(v.begin(), v.end());
		}
	}

	return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i;
		cin>>k>>n;

		vector<int> v;
		for(i=1;i<=k;i++)
			v.push_back(i);
		
		for(i=0;i<k;i++){
			for(auto it: v)
				cout<<it<<' ';
			cout<<'\n';
			next_permutation(v.begin(), v.end());
		}
	}

	return 0;
>>>>>>> 37dd2468ffbfc303a58dd91a3178b779daf6f3c9
}