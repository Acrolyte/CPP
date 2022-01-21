#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v){
	for(auto i : v)
		cout << i << " ";
	cout << endl;
}

void Matcher(string s,regex reg){
	sregex_iterator currentMatch(s.begin(), s.end(),reg);
	sregex_iterator lastMatch;
	while(currentMatch!=lastMatch){
		smatch match = *currentMatch;
		cout<<match.str()<<" ";
		currentMatch++;
	}
	cout<<endl;
}
int main()
{
	string s = "haafajhsg";
	regex reg("([a-h])");
	Matcher(s,reg);

	return 0;
}