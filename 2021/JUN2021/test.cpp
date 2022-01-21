#include <bits/stdc++.h>
#define ll long long
using namespace std;

void check(string s){
		stack<char> st;
		int flag=0;
		// cout << s << " ";
		for(auto it: s){
			if(it==')'|| it == '}' || it == ']'){
				if(it == ')' && st.top()=='(')
					st.pop();
				else if(it == '}' && st.top()=='{') st.pop();
				else if(it == ']' && st.top()=='[') st.pop();
				else {
					cout << "NO" << endl;
					flag=1;
					break;
				}
			}
			else st.push(it);
		}
		if(flag==0)
		if(st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
}
int main()
{
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		check(s);
	}
	return 0;
}