<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll c=5,z=0;
		while((n/c)>0){
			z += (n/c);
			c *= 5;
		}		
		cout<<z<<'\n';
	}
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll c=5,z=0;
		while((n/c)>0){
			z += (n/c);
			c *= 5;
		}		
		cout<<z<<'\n';
	}
	return 0;
>>>>>>> 37dd2468ffbfc303a58dd91a3178b779daf6f3c9
}