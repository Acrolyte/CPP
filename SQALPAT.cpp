#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2!=0){
			for(j=(i*5)-4;j<=i*5;j++)
				cout<<j<<' ';
		}
		else{
			for(j=5*i;j>(5*i)-5;j--)
				cout<<j<<' ';
		}
		cout<<'\n';
	}
	return 0;
}