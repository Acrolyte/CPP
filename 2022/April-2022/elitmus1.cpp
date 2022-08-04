#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)


int solve(){
	string A;
	cin>>A;
	int l = 0, r = 0, n = A.length();
	int L[n+1] = {0};
	int R[n+1] = {0};
	// cout<<n;
	int mx = INT_MAX;
	
	if(A[0] == 'R') L[0] = 1; 
	if(A[n-1] == 'L') R[n-1] = 1;
	// L[0] = 0;

	 // R[n-1] = 0;

	for(int i=1;i<n;i++){
		if(A[i] == 'R')
			L[i] = L[i-1] + 1;
		else L[i] = L[i-1];
	}

	for(int i=n-2;i>=0;i--){
		if(A[i] == 'L')
			R[i] = R[i+1] + 1;
		else R[i] = R[i+1];
	}



	for(int i = 0;i<n;i++){
		l = R[i+1];
		r = L[i-1];
		mx = min(mx,l+r);
	}
	return mx;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    TC(t)
    cout<<solve()<<endl;

	return 0;
}