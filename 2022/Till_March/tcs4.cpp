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
#define TC(t) while (t--)

class Phile{
public:
	string name;
	int offset;
	int size;
	bool status;
	Phile(){
		name = "";
		offset = size = 0;
		status = false;
	}
};

void solve(){
	int n,m;
	cin>>n;
	vector<Phile> vp(n);

	TC(n){
		string naam = "", siz = "";
		cin>>naam;
		int ofs = 0, sta = 0;
		cin>>ofs>>siz>>sta;
		Phile p;
		p.name = naam;
		p.offset = ofs;
		p.status = sta;
		int len = siz.length();
		int sis = stoi(siz.substr(0,len-1));
		p.size = sis;
		vp.push_back(p);
	}
	for(auto i : vp){
		cout<<i.name<<'\n';
	}
	// cin>>m;
	// TC(m){
	// 	string naam = "", siz = "";
	// 	cin>>naam>>siz;
	// 	Phile p;
	// 	p.name = naam;

	// }

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