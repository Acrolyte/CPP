#include <bits/stdc++.h>
using namespace std;
const int N = 1e4;
int dp[N+1];
#define ll long long

int main()
{
	int t;
	cin>>t;

	ll sum=0,sum2=0,tmp;
	for(int i=1; i<=N; i++){
		sum += i;
		// if(i>=2) sum2+=i;

		if(sum%2==0) dp[i]=i;
		else dp[i]=i-1;
	}
	// dp[2]=1;

	while(t--){
		int n;
		cin>>n;
		int q[n+1]={};
		for (int i = 0; i < n; ++i)
			q[i]=i;

		cout<<dp[n]<<'\n';
	}
	return 0;
}