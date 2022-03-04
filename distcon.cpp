#include <bits/stdc++.h>
using namespace std;

int main(){
	int d;
	cin>>d;
	if(d%2!=0){
		cout<<-1;
		return 0;
	}
	int n = d/2;
	cout<<n<<' '<<0<<endl;
	cout<<0<<' '<<n<<endl;
	cout<<-n<<' '<<0<<endl;
	cout<<0<<' '<<-n;
	return 0;
}