#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a,b,c,d,k;

	while(t--){
		cin >> a >> b >> c >> d >> k;
		int dif = abs(c-a) + abs(d-b);
		if(dif == k)
			cout << "YES" << endl;
		else{
			if(dif>k)
				cout << "NO" << endl;
			else{
				if(abs(dif-k)%2==0)
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
			}
			
		}

	}	

	return 0;
}