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

#define FOR(a, b, c) for (LL(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (LL(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (LL(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (LL(a) = (b); (a) * (a) <= (c); ++(a))
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
	LL n,m,x1,y1,x2,y2;
	cin>>n>>m>>x1>>y1>>x2>>y2;

	if((x1+y1)%2==0 && (x2+y2)%2==0){
		bool t = false;
		if(x1<x2 && y1<y2) t = true;
		if(t){
			REPN(i,n){
				REPN(j,m){
					if(i==x2 && j==y2) cout<<"2 ";
					else if((i+j)% 2==0) cout<<"1 ";
					else cout<<"3 ";
				}
				cout<<'\n';
			}
		}
		else{
			REPN(i,n){
				REPN(j,m){
					if(i==x1 && j==y1) cout<<"1 ";
					else if((i+j) % 2==0) cout<<"2 ";
					else cout<<"3 ";
				}
				cout<<'\n';
			}
		}
	}
	else if((x1+y1)%2!=0 && (x2+y2)%2!=0){
		bool t = false;
		if(x1<x2 && y1<y2) t = true;
		if(t){
			REPN(i,n){
				REPN(j,m){
					if(i==x2 && j==y2) cout<<"2 ";
					else if((i+j)% 2!=0) cout<<"1 ";
					else cout<<"3 ";
				}
				cout<<'\n';
			}
		}
		else{
			REPN(i,n){
				REPN(j,m){
					if(i==x1 && j==y1) cout<<"1 ";
					else if((i+j) % 2!=0) cout<<"2 ";
					else cout<<"3 ";
				}
				cout<<'\n';
			}
		}
	}
	else{
		bool t = false;
		if((x1+y1) % 2==0) t = true;
		if(t){
			REPN(i,n){
				REPN(j,m){
					if((i+j) % 2==0) cout<<"1 ";
					else cout<<"2 ";
				}
				cout<<'\n';
			}
		}
		else{
			REPN(i,n){
				REPN(j,m){
					if((i+j )% 2==0) cout<<"2 ";
					else cout<<"1 ";
				}
				cout<<'\n';
			}
		}
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