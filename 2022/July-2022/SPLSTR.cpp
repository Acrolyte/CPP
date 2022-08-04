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

void solve()
{	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s; cin.ignore();

	ll c1=0;
	for(auto i: s)
		if(i=='1') c1++;
	ll c0 = n - c1;

	ll x = abs(c1-c0);

	ll ans = 0;
	ll a = x/k;
	ll b = x%k;
	if(b) ans++; 
	ans = a+ans;
	debug(a)
	debug(b)
	cout<<ans<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("Error.in","w",stderr);
	#endif
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    TC(t)
    solve();

	return 0;
}