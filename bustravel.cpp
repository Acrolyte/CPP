#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,t;
	cin>>n;
	t = n;
	string x = "";

	map<char,pair<int,int>> mp;
	cin.ignore();
	int i=1;
	while(t--){
		getline(cin,x);
		// cout<<x<<endl;
		stringstream ss(x);
		string word;
		vector<string> v;
		while(getline(ss,word,'|')){
			v.push_back(word);
		}
		for(auto it : v[0]){
			if(isalpha(it))
				if(mp.find(it) == mp.end())
					mp.insert({it,{i,0}});
		}
		for(auto it : v[1]){
			if(isalpha(it))
				if(mp.find(it)!= mp.end())
					mp[it].second = i;
		}
		i++;
	}

	cin>>t;
	// cout<<"\nt = "<<t<<endl;
	map<int,pair<int,int>> tmp;
	int a=0,b=0;
	i=1;
	while(t--){
		cin>>a>>b;
		// cout<<a<<' '<<b<<endl;
		tmp.insert({i,{a,b}});
		i++;
	}

	for(auto &it : mp){
		char ch = it.first;
		pair<int,int> p1 = it.second;

		bool fl = false;
		for(auto &it2 : tmp){
			pair<int,int> p2 = it2.second;

			if(p1.first == p2.first && p1.second == p2.second){
				fl = true;
				it2.second.second = 0;
				it2.second.first = 0;
				break;
			}
		}
		if(fl){
			it.second.first = 0;
			it.second.second = 0;
		}
	}

	for(auto )

	cout<<"\ntmp map\n";
	for(auto it : tmp){
		i = it.first;
		pair<int,int> p = it.second;
		cout<<i<<' '<<p.first<<' '<<p.second<<endl;
	}


	cout<<"\n mp map \n";
	for(auto it : mp){
		pair<int,int> p = it.second;
		cout<<it.first<<' '<<p.first<<' '<<p.second<<endl;
	}

	auto it_mp = mp.begin(), it2_mp = mp.end();
	auto it_tmp = tmp.begin(), it2_tmp = tmp.end();
	for(;it_mp != it2_mp || it_tmp != it2_tmp;){
		if(it)
	}




	return 0;
}