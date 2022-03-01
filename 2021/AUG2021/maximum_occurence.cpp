#include <bits/stdc++.h>
using namespace std;
const int N = 256;
int hsh[N];

int main()
{
	string s;
	getline(cin,s);

	for(auto i: s){
		hsh[i]++;
	}
	int mx=0;
	char ch=' ';

	for (int i = 0; i < N; ++i){
		if(mx<hsh[i]){
			mx = hsh[i];
			ch = i;
		}
	}

	cout<<ch<<" "<<mx;
	return 0;
}