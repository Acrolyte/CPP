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

void solve(){
	ll n,c,t,x;
	cin>>n;
	c = 0;
	vi v;
	REPN(i,n){ cin>>x; v.pb(x);}

	int co = 0, ce = 0;
	for(int i=0;i<n;i+=2){
		if(v[i]&1) co++;
		else ce++;
		c++;
	}
	debug(c) debug(ce) debug(co)
	bool ans = true;
	if(c==co || ce == c);
	else ans &= false;

	c = co = ce = 0;

	if(n>0)
	for(int i=1;i<n;i+=2){
		if(v[i]&1) co++;
		else ce++;
		c++;
	}
	debug(c) debug(ce) debug(co)
	
	if(c==co or c==ce);
	else ans &= false;

	if(ans) cout<<"YES";
	else cout<<"NO";
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("Error.in","w",stderr);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t;
    //cin>>t;
    //TC(t)
    solve();

	return 0;
}