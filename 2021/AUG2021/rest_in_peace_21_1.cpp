#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s=to_string(n);

		if(n%21==0 or s.find("21")!=-1)
			cout << "The streak is broken!\n";
		else
			cout << "The streak lives still in our heart!\n";


	}
	return 0;
}