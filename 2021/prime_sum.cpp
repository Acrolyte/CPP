#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for(int p=2; p*p <=n; p++){
		if(prime[p] == true){
			for (int i = p*p ; i <= n; i+=p)
				prime[i] = false;
		}
	}

	int c=0;

	for(int i=2;i<n;i++){
		for(int j=2;i+j<=n and i<=j;j++){
			

			if(prime[i] and prime[j] and prime[i+j])
		
				c++;

			

		}
	}

	cout<<c;
	return 0;
}