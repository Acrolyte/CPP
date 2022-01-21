#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n,x;
	cin>>n;
	ll s1=0,i=0;
	while(n--){
		cin>>x;
		if(i==0) {
			s1+= x;
			i=1;
		}
		else
			s1 += abs(x);
	}
	
	cout<<s1;
	return 0;
}