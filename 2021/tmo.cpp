#include <bits/stdc++.h>
using namespace std;

int main()
{

	vector<int> a;
	int ar[]= {10, 12, 15, 16, 16, 18 , 19 ,21};
	for(auto i : ar) cout<<i<<endl;
	for (int i = 0; i < 8; ++i)
	{
		a.push_back(ar[i]);
	}
	int c = upper_bound(a.begin(), a.end(), 16) - a.end();
	c = abs(c);
	cout<<c;
	return 0;
}