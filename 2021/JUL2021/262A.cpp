#include <bits/stdc++.h>
using namespace std;

bool checkluck(int x,int k){
	string s = to_string(x);
	int c=0;
	for(auto i : s){
		if(i=='4' || i=='7') c++;
	}
	if(k>=c)
		return true;
	return false;
}

int main()
{
	int n,k,x,t=0;
	cin>>n>>k;

	while(n--){
		cin>>x;
		if(checkluck(x,k)) t++;
	}

	cout<<t;
	return 0;
}