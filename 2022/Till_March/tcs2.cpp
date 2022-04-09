#include<bits/stdc++.h>
#define ll long long
using namespace std; 

class student{
  public:
   
    double percent;
    int id, clg, pref1, pref2, pref3;
  
    student(){
      id = pref1 = pref2 = pref3 = 0;
      clg = -1;
    }
}; 

bool comp(student a, student b){
  if(a.percent>b.percent) return true;
  else if(a.percent<b.percent) return false;
  else return a.id<b.id;
}

int find_str(string s){
  bool flag=false;
  string ans="";
  
  for(int j=0;j<int(s.length());j++){
    if(s[j]=='-') flag=true;
    else if(flag) ans+= s[j];    
  }
  
  return stoi(ans);
}



int main(){  
 
    ll c, n; 
    cin>>c>>n; 
    int seats[c+1]; 
    
    for (int i=1;i<=c;i++) {
        cin>>seats[i]; 
    }
        
    string input; 
    vector<student> v(n); 
    
    for (int i=0;i<n;i++){ 
        
        cin>>input; 
        vector<string> inputs; 
        string temp = ""; 
        
        for (int i=0;i<int(input.length());i++){ 
            if (input[i]==','){ 
                inputs.push_back(temp); 
                temp=""; 
            } 
            else temp += input[i]; 
        } 
        
        inputs.push_back(temp); 
        v[i].id=find_str(inputs[0]); 
        v[i].percent=stod(inputs[1]); 
        v[i].pref1=find_str(inputs[2]); 
        v[i].pref2=find_str(inputs[3]); 
        v[i].pref3=find_str(inputs[4]); 
        
    } 
    
    sort(v.begin(), v.end(), comp); 
    for(int i=0;i<n;i++)
    { 
        if(seats[v[i].pref1] > 0){ 
            seats[v[i].pref1] -= 1; 
            v[i].clg = v[i].pref1; 
        } 
        else if(seats[v[i].pref2] > 0){ 
            seats[v[i].pref2] -= 1; 
            v[i].clg = v[i].pref2; 
        } 
        else if(seats[v[i].pref3] > 0){ 
            seats[v[i].pref3] -= 1; 
            v[i].clg = v[i].pref3; 
        } 
    }
    
    string stri = "";
    for (int i=0;i<n;i++){ 
        if (v[i].clg!=-1){ 
            stri += "Student-" + to_string(v[i].id) + " C-" + to_string(v[i].clg) + "\n"; 
        } 
    }
    int le = stri.length();
    cout<<stri.substr(0,le-1);
    return 0; 
}