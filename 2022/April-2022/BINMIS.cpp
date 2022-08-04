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


void solve(){
	int n; cin>>n;
	string s;
	cin>>s;
	if(n%2==1){ cout<<"NO\n"; return;}

	int z = 0, y = 0,i=1;
	vi v;
	for(auto i: s){ 
		if(i=='0') z++;
		else{
			v.pb(i);
			y++;
		}
		i++;
	}

	if(z==y)
		cout<<"YES\n1 "<<n<<endl;
	else{
		int c=0;

		if(z>y){
			c = z-y;
			c = c>>1;
			string w = "";
			while(c--) w.push_back('0');
			size_t f = s.find(w);
			if(f != string::npos)
				cout<<"YES\n"<<f+1<<" "<<f+w.size();
		}
		if(y>z){
			c = y-z;
			c = c>>1;
			string w = "";
			while(c--) w.push_back('1');
			size_t f = s.find(w);
			if(f != string::npos)
				cout<<"YES\n"<<f+1<<" "<<f+w.size();
		}
		cout<<'\n';
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	TC(t)
	solve();

	return 0;
}