#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,i,devu=0,x,churu=0;
	cin >> n >> d;

	for (i = 0; i < n; ++i){
		cin>>x;
		devu = devu+x;
	}
	devu = devu + 10*(n-1);
	if (devu>d)
	{
		cout << -1;
		return 0;
	}
	churu = 10*(n-1)+(d-devu);
	cout << churu/5;
	return 0;
}