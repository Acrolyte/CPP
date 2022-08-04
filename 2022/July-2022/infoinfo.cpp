#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
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
//debugger
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x << ' '<< x << '\n';
#else
#define debug(x)
#endif


const int M = 1e9+7;

int ArraySum(int N, vector<int> A, vector<int> L, vector<int> R){

	for(int i=1;i<n;i++){ 
		ll l1 = L[i], r1 = R[i];

		if(l1 < 0){
			A[r1] = -l1;
		}
		else if(l1 > 0){
			for(int j = l1;j<=r1;j++){
				A[j] = A[j] * (l1 + r1);
			}
		}
		for(int j=1;j<n;j++)
			cout<<A[j]<<' ';
		cout<<endl;
	}

	ll ans = 0;
	for(int i=1;i<n;i++) ans += A[i] % M;

	return ans;
}

void solve(){
	int n,x; cin>>n;
	vector<int> a(n+1),l(n+1),r(n+1);
	ll s = 0;
	n = n+1;

	for(int i=1;i<n;i++)
	 	cin>>a[i];

	for(int i=1;i<n;i++)
	 	cin>>l[i];

	for(int i=1;i<n;i++)
	 	cin>>r[i];

	for(int i=1;i<n;i++){ 
		ll l1 = l[i], r1 = r[i];

		if(l1 < 0){
			a[r1] = -l1;
		}
		else if(l1 > 0){
			for(int j = l1;j<=r1;j++){
				a[j] = a[j] * (l1 + r1);
			}
		}
		for(int j=1;j<n;j++)
			cout<<a[j]<<' ';
		cout<<endl;
	}

	ll ans = 0;
	for(int i=1;i<n;i++) ans += a[i] % M;
	cout<<ans;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("Error.in","w",stderr);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // TC(t)
    solve();

	return 0;
}