#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x;
	cin >> n;
	vector<int> v;

	for(i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
	}
	int min = *min_element(v.begin(), v.end());
	int max = *max_element(v.begin(), v.end());
	auto it = find(v.rbegin(), v.rend(),min);
	// cout << it-v.rbegin() << " " << it2-v.begin() << endl;
	int ans =0;
	for(auto s=it; s!=v.rbegin();s--){
		ans++;
		swap(*s,*(s-1));
	}
	auto it2 = find(v.begin(), v.end(),max);
	for(auto s=v.begin(); s!=it2;s++){
		ans++;
		swap(*s,*(s+1));
	}
	cout << ans;
	return 0;
}