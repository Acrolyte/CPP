#include <bits/stdc++.h>
using namespace std;

void patrn(int n){
	int i,j,k;
	for(i=1;i<=n;i++){
		for(j=0;j<i-1;j++)
			cout << '*';
		cout << i ;
	}
}

int main()
{
	int t,n,i;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=1;i<=n;i++){
			patrn(i);
			cout << endl;
		}

	}
	return 0;
}