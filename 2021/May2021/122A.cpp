#include <bits/stdc++.h>
using namespace std;

int check(int n){
	string s= to_string(n);
	for(auto i : s){
		if(i=='4' || i=='7'){

		}else{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 4; i<=n ;){
		// cout << i << endl;
		if(n%i==0 && check(i)==1){
			cout << "YES";
			return 0;
		}
		if(i%10==4)
			i = i+3;
		else if(i%10==7){
			i+=7;
		}
	}
	cout << "NO";
	return 0;
}