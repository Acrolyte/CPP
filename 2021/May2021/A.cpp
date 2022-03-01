#include <bits/stdc++.h>
using namespace std;
#define ll long long

int value(char &ch){
	int val = (int) ch - 'a';
	return 26-val;
}
int main(){
	string s;
	cin >> s;
	int max=0,a=0,b=s.size()-1,j=0,t=0;
	for(int i=0; i<s.size();i++){
		if(value(s[a])>value(s[b])){
			max = value(s[a]);
			a++;
		}else{
			max = value(s[b]);
			b--;
		}
		if(i%2==0)
			t = t+max;
		else
			j = j+max;
	}
	for(int i=0;i<s.size();i++)
		cout
	cout << sumcount(d);
	return 0;
}