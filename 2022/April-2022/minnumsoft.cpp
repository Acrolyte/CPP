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

class Tmp{
public:
	int ind;
	vector<string> v;
};

void helper(vector<string> v, vector<Tmp> v2, int idx, vi &ds, vi &ans){
	if(check(v,ds)){
		ans = ds;
		return;
	}
	if(idx == v2.size()) return;
	ds.pb(idx);
	helper(v,v2, idx+1,ds);
	ds.pop_back();
	helper(v,v2,idx, ds);
}

void solve(){
	int n,m; cin>>n;
	vector<string> v(n);
	TC(n){ string w; cin>>w; v.pb(w);}

	cin>>m;
	int j = 0;
	vector<Tmp> v2;
	TC(m){
		int t;
		cin>>t;
		vector<string> wo;
		Tmp tobj;
		tobj.ind = j;
		TC(t){
			string w; cin>>w; wo.pb(w);
		}
		
		tobj.v = wo;
		v2.pb(tobj);
		j++;
	}
	for(auto i: v2){
		cout<<i.ind<<' ';
		vector<string> tm = i.v;
		for(auto j: tm) cout<<j<<' ';
			cout<<endl;
	}

	vi ds, ans;
	helper(v,v2, 0, ds, ans);
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