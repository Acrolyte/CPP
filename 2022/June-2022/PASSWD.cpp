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


void solve(){

	string s;
	cin>>s;
	int count = 0, l = s.length();
	bool lw = false, up = false, di = false, sp = false;
	for(auto i: s){
		if((count>0 and count<l-1) and i >= 65 and i<= 90) up = true;
		if(i >= 97 and i<= 122) lw = true;
		if((count>0 and count<l-1) and i >= 48 and i<= 57) di = true;
		if((count>0 and count<l-1) and (i=='@' or i == '#' or i=='%' or i=='&' or i=='?'))
			sp = true;
		count ++;
	}
	if(lw and up and di and sp and s.length()>=10)
		cout<<"YES\n";
	else cout<<"NO\n";
	
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll t;
    cin>>t;
    TC(t)
    solve();

	return 0;
}