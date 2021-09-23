#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i=0,j=0,a,s1=0,s2=0,s3=0;
	cin >> n;
	vector<vector<int>> v(n);

	for(i=0;i<n;i++){
		vector<int> x;
		for(j=0;j<3;j++){
			cin >> a;
			x.push_back(a);
			if(j==0) s1 = s1 + a;
			else if(j==1) s2 = s2+ a;
			else if(j==2) s3 = s3+a;
		}
		v.push_back(x);
	}

	if(s1==0 && s2==0 && s3==0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}