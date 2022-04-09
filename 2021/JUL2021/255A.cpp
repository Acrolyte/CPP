#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,s1=0,s2=0,s3=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(i%3==1) s1+=x;
		if(i%3==2) s2+=x;
		if(i%3==0) s3+=x;
	}
	int m = max(s1,max(s2,s3));
	if(m==s1) cout<<"chest";
	else if(m==s2) cout<<"biceps";
	else if(m==s3) cout<<"back";

	return 0;
}