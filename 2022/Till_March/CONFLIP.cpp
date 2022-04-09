<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			int i,n,q;
			cin>>i>>n>>q;
			int c=n/2;
			if(i!=q && n%2!=0) c++;
			cout<<c<<endl;
		}
	}
	return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			int i,n,q;
			cin>>i>>n>>q;
			int c=n/2;
			if(i!=q && n%2!=0) c++;
			cout<<c<<endl;
		}
	}
	return 0;
>>>>>>> 37dd2468ffbfc303a58dd91a3178b779daf6f3c9
}