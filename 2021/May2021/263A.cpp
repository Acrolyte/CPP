#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<int>> v;
	int x,a,b;
	for (int i = 1; i <6; ++i)
	{
		vector<int> s;
		for (int j = 1; j<6; ++j)
		{
			cin >> x;
			s.push_back(x);
			if(x==1){
				a=i;
				b=j;
			}
		}
		v.push_back(s);
	}
	a = a-3;
	b = b-3;
	int sum = abs(a) + abs(b);
	cout << sum;
	return 0;
}