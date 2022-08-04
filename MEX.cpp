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
typedef unsigned long long ull;
typedef long double lld;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define all(v) v.begin(), v.end()
#define alla(arr, sz) arr, arr + sz
#define sz(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define MOD 1e9+7
#define INF 1e18

void solve(){
	ll n=0,x=0,k=0,y=0,z=0,a=0,b=0,c=0;
	cin>>n>>k;
	multiset<ll> m;
	y = n;
	TC(n){ cin>>x; m.insert(x); }
	n = y;
	ll i=0,j=0;
	// for(;i<2*(1e5);i++){
	// 	if(*m.begin()==i){
	// 		m.erase(*m.begin());
	// 		continue;
	// 	} else {
	// 		k--;
	// 	}
	// 	if(k<0) break;
	// }
	// cout<<i<<endl; 
	while(i<n){
		if(m.find(i)!=m.end()){
			if(k>0){ j++; k--;}
			else {cout<<j<<endl; return;}
		}
		else { i++; j++;}
	}
	cout<<j+k<<endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("Error.in","w",stderr);
	#endif
	ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    TC(t)
    solve();

	return 0;
}