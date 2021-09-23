#include <bits/stdc++.h>
using namespace std;

int main(){
	string a ,b ;
	cin >> a >> b;
	int ans=0,flag=0,s1=0, s2=0;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	for(int i=0;i<a.length();++i){
		s1 = (int) a[i];
		s2 = (int) b[i];
		if(a[i]>b[i]){
			cout << 1;
			flag = 1;
			break;
		}
		if(a[i]<b[i]){
			cout << -1;
			flag = -1;
			break;
		}
	}
	if(flag==0) cout << 0;
}