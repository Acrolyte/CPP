#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    ll t;
    cin>>t;

    ll n,k,x,tot=0;
    while(t--){
    	tot=0;
    	cin>>n>>k;
    	cin>>x;
    	cin>>tot;
    	ll as = k+1;

    	for (ll i = 0; i < n; ++i){
    		
    		if(i%as==0 and i!=0){
    			tot += x;
    			cout << x << " ";
    		} else {
    			cin>>x;
    		}
    	}
    	cout<<endl;
    	cout<<tot<<endl;

    }
	return 0;
}