#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j;
	cin >> n >> m;
	for (i = 1; i <= n; ++i)
	{
		if (i%2!=0)
		{
			for(j=0;j<m;++j)
				cout << '#';
			cout << endl;
		}
		else{
			if(i%4==0)
				cout << '#';
			for (j=1; j <= m-1; ++j)
				cout << '.';
			if(i%4!=0)
				cout << '#';
			cout << endl;
		}
		
	}
	return 0;
}