#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x,e=0,o=0;
	cin >> n;
	vector<int> v;

	for(i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
		if(x%2==0) e++;
		else o++;
	}

	if (e==1)
	{
		for(i=0;i<n;i++)
			if(v[i]%2==0){
				cout << i+1;
				return 0;
			}
	}else{
		for(i=0;i<n;i++)
			if(v[i]%2!=0){
				cout << i+1;
				return 0;
			}
	}

	return 0;
}