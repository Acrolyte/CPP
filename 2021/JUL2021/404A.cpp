#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int tmp = n;
	int flag=0;

	vector<string> v;
	while(tmp--){
		string x;
		cin>>x;
		v.push_back(x);
	}

	char a= v[0][0];
	char b= v[0][1];
	if(a==b)
	{
		cout<< "NO";
		return 0;	
	}
	vector<string> vb;

	for (int i=0;i<n;i++)
	{
		string x;
		for(int j=0;j<n;j++)
			x.push_back(b);
		x[i] = a;
		x[n-i-1] = a;
		vb.push_back(x);
	}

	for(int i=0;i<n;i++){
		if(v[i]!=vb[i]){
			cout<< "NO";
			return 0;
		}
	}
	cout << "YES";
		
	return 0;
}