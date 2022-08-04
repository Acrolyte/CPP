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

string funct(string &s){
	int i=0,j=0;

	for(auto it: s){
		if(it == '?') continue;
		if(it == 'u') i--;
		else if(it == 'd') i++;
		else if(it == 'r') j++;
		else j--;
	}

	i = 4-i;
	j = 4-j;

	int flag = 0;
	for(auto &it: s){
		if(it == '?'){
			if(flag == 1){
				it = 'd';
				flag = 0;
				continue;}
			if(i>0){ it = 'd'; i--;}
			else if(i<0){ it = 'u'; i++;}
			else if(j>0) it = 'l';
			else if(j<0) it = 'r';
			else { it = 'u'; flag = 1;}

		}

	}

	return s;
}


int funct(vi v){
	int pos = 0;
	for(auto i:v){
		if(i==1) break;
		pos++;
	}
	int n = v.size();
	int mi = n;
	int c = 0;
	for(int i=pos;i<n;i++){
		if(v[i]==2) {
			mi = min(mi,c);
			break;
		}
		c++;
	}
	c = 0;
	for(int i=pos;i>=0;i--){
		if(v[i] == 2){
			mi = min(mi,c);
		 	break;
		}
		c++;
	}
	
	if(mi == n) mi = 0;
	return mi;
}
string funct(string &s, int num){
	for(auto &i: s){
		int t = num;
		while(t--){
			if(i == 'z') i = 'a';
			else if(i== 'Z') i = 'A';
			else i++;
		}
	}

	string ans = "", token = "vjl2cz1o43";
	for(auto i: s){
		bool t = false;
		for(auto j: token){
			if(i==j or i==(j-32)){ t = true; break;}
		}
		if(!t) ans.push_back(i);
	}

	if(ans == "") ans = "EMPTY";
	return ans;
}

void solve(){
	// int n,x; cin>>n;
	// vi v;
	// REPN(i,n){
	// 	cin>>x;
	// 	v.pb(x);
	// }
	// cout<<funct(v)<<endl;
	string s; cin>>s;
	int n; cin>>n;
	cout<<funct(s,n);
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