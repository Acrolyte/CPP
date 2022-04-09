#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_SIZE = 1e5 + 1;

vector<ll> pri(MAX_SIZE,true);
vector<ll> prime;
vector<ll> SPF(MAX_SIZE);

void make_sieve(int N){
	pri[0] = pri[1] = false;
	for(ll i=2;i<N;i++){
		if(pri[i]){
			prime.push_back(i);
			SPF[i] = i;
		}
		for(ll j=0;
			j<(int)prime.size() &&
			i*prime[j] < N && prime[j] <= SPF[i];
			j++){
			pri[i*prime[j]]= false;
			SPF[i*prime[j]] = prime[j];
		}
	}
}

int ShortestPath(int N,vector<int> A){
	int ma = 0;
	for(auto i: A) ma = max(ma,i);
		int n = N;
	int v[n][n];
	bool v2[n][n];
	memset(v,-1,sizeof(v));
	memset(v2,false,sizeof(v2));

		// make_sieve(ma);
	int mi = INT_MAX;
	int i,j;
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			int k = __gcd(A[i],A[j]);
			if(i==j){
				v[i][j] = ma -k;
			}
			if(i<j && k>1){
				v[i][j] = k;
			} 			
		}
	}
	for(i=0;i<N;i++){
		int s = 0;
		for(j=0;j<N;j++){
			cout<<v[i][j]<<' ';
			// if(v[i][j]!=-1) mi = min(mi,v[i][j]);
			if(v[0][j] != -1 && v[N-1][i]!=-1)
				s += v[i][j];
		}
		s += v[N-1][N-1];
		mi = min(mi,s);
		cout<<'\n';
	}

	return mi;
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