#include<bits/stdc++.h>
using namespace std;

vector <string> allSub(string a){
    if(a.size()==0){
        vector<string> bes;
        bes.push_back("");
        return bes;

    }
      
    char ch=a[0];
    string ros=a.substr(1);
    vector<string> mystring=allSub(ros);
    vector<string> mstr;
    for(string d:mystring){
        mstr.push_back(""+d);
            mstr.push_back(ch+d);
    }
    return mstr;
    
}

int main(){
    string r;
    cin>>r;

  vector<string> s = allSub(r);
  for(auto i :s)
  	cout<<i<<endl;
  
    return 0;
    
    
}