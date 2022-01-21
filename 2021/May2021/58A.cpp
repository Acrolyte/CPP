#include <bits/stdc++.h>
using namespace std;
#define itr string::iterator
int main(){
	string s;
	int flag=0;
	getline(cin,s);
	itr it=find(s.begin(),s.end(),'h');
	itr it2=find(it+1,s.end(),'e');
	itr it3=find(it2+1,s.end(),'l');
	itr it4=find(it3+1,s.end(),'l');
	itr it5=find(it4+1,s.end(),'o');
	if(it!=s.end() && it2!=s.end() && it3!=s.end() && it4!=s.end() && it5!=s.end()){
		cout << "YES" ;
		return 0;
	}
	

	cout << "NO";


	return 0;
}