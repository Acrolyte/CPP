#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,l,r;
	cin>>n>>x;
	int t=0,lw=0;

	while(n--){
		cin>>l>>r;
		t+= (l-lw-1)%x;
		t+= r-l+1;
		lw=r;
	}

	cout<<t<<endl;

	return 0;
}