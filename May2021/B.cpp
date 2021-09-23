#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	std::vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int x=0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i]!=1){
			v[i]=1;
			for(int j=i+1;j<n;j++){
				if(v[j]==0)
					v[j]=1;
				else
					v[j]=0;
			}
			x++;
		}
		else{
			continue;
		}
	}
	cout << x;
	return 0;
}