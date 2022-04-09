#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ShortestPath(int N,vector<int> A){
	int ma = 0;
	for(auto i: A) ma = max(ma,i);
		int n = N,i,j;
	int v[n][n];
	memset(v,-1,sizeof(v));
	for(i=0;i<n;i++){
		for(j=i;j<n;j++)
			v[i][j] = __gcd(A[i],A[j]);
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<v[i][j]<<' ';
		}
		cout<<endl;
	}



	return ma;
}

void solve(){
	int t,x;
	cin>>t;
	int n = t;
	vector<int> v;
	int ma = 0;
	while(t--){
		cin>>x;
		v.push_back(x);
	}
	
	cout<<ShortestPath(n,v);
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t;
    //cin>>t;
    //TC(t)
    solve();

	return 0;
}