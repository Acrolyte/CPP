#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n;
		set<int> s;
		vector<int> v;
		// cout << "t = " << t << endl;
		for (int i = 0; i < n; ++i)
		{
			cin >> x;

			// cout << "i = " << i  << " x= " << x << endl;
			if(s.size()<7)
			{
				if(x>=1 && x<=7) s.insert(x);
				else v.push_back(x);
			}
		}
		int temp = s.size()+ v.size();
		cout << temp << endl;	
		
	}
	return 0;
}