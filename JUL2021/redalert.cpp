#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin>>t;

	while(t--){
		ll n,d,h,x,ans=0,flag=0;
		cin>>n>>d>>h;
		ll arr[n+1];
		arr[0]=0;

		for(ll i=1;i<=n;i++){
			cin>>x;

			if(x==0){ 
				if(arr[i-1]<d) arr[i] = 0;
				else arr[i] = arr[i-1] - d;
				// else if(ans<d) ans=0;
			}
			if(x>0) arr[i] = arr[i-1]+x;			
		}
		for(ll i=1;i<=n;i++){
			
			if(arr[i]>h){
				flag = 1;
				cout<<"YES";
				break;
			}
		}
		// cout<<endl;
		if(flag==0) cout<<"NO";
		cout<<endl;
	}
	return 0;
}