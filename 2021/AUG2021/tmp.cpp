#include <bits/stdc++.h>
using namespace std;

int testha(int n, int a[]){
	int len= sizeof(
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	cout<<testha(n,a)<<endl;
	set<int> s;
	int ans=0;

	for(int i=0; i<n; i++){
		int el= a[i];
		if(s.find(el)==s.end()){
			s.insert(el);
		}
		else{
			ans++;
			s.clear();
		}
	}
	cout<<ans;
	return 0;
}