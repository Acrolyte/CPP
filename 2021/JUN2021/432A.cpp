#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,x,ans=0;
	cin >> n >> k;
	vector<int> v;

	for(i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int l = v.size();

	for(i=0;i+2<l;){
		if(v[i]+k<=5){
			if( v[i+1]+k<=5){
				if(v[i+2]+k<=5 ){
					ans++;
					i=i+3;
				}else break;
			}else break;
		}else break;
	}
	cout << ans << endl;
	return 0;
}