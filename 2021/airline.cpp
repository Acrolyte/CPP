#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;++i)
#define repr(i,k) for(i=k;i>0;--i)


int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		int sum = a+b+c;
		int tmp = a;
		a = min(a, min(b,c));
		c = max(tmp, max(b,c));
		b = sum - (a+c);


		if(e<a and e<b and e<c)
			cout << "NO";
		else {
			if((a+b<=d and c<=e) or (c+b<=d and a<=e) or (a+c<=d and b<=e))
				cout << "YES";
			else cout << "NO";
		}

		cout<<'\n';
	}

	return 0;
}