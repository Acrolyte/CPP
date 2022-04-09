#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,m,x,k;
	cin >> t;
	while(t--){

		cin >> n >> m >> k;
		set<int> v;
		set<int> dis;

		for(int i=0;i<k;i++){
			cin >> x;

			auto it = v.find(x);
			
			if(it==v.end())
				v.insert(x);
			else{
				if(x>=1 && x<=n)
					dis.insert(x);
			}	
		}
		cout << dis.size() << " ";
		for(auto it2 : dis)
			cout << it2 << " ";
		cout << endl;

	}
	return 0;
}