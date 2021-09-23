#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x;
	cin >> n;
	std::vector<int> v(n);
	std::vector<int> s(n);
	for(i=1;i<=n;i++)
		cin >> v[i];
	for (i = 1; i <=n; ++i)
	{
		x = v[i];
		s[x]=i;
	}
	for (i = 1; i <=n; ++i)
	{
		cout << s[i] << " ";
	}
	return 0;
}