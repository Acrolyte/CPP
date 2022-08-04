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

	// Disjoint Set DataStructure
	map< ll,ll > parent; 		// reserve space for map if n > 10000
	map< ll,ll > urank;

	void create(ll x)
	{
		parent[x] = x ;
		urank[x] = 0 ; 		// rank = no. of nodes in its subtree
	}

	ll find(ll x)
	{
		if( parent[x] != x )	//path compression
		{
			parent[x] = find(parent[x]) ;
		}
		return parent[x];
	}

	void merge(ll x, ll y)
	{
		ll xroot = find(x);
		ll yroot = find(y);

		if( urank[xroot] <= urank[yroot] )	// Union by rank
		{
			parent[xroot] = yroot ;
			urank[yroot] = urank[yroot] + urank[xroot] ;
		}
		else
		{
			parent[yroot] = xroot;
			urank[xroot] = urank[xroot] + urank[yroot] ;
		}
	}


void solve(){
	ll n,k,x,y;
	cin>>n>>k;
	REPN(i,n) create(i);
	TC(k){
		cin>>x>>y;
		merge(x,y);
	}	
	int c = 0;
	REPN(i,n){
		if(parent[i] == i) c++;
 	}
 	cout<<c;
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