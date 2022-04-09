#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,ans;
    cin>>str;
    int n=str.size();
    int i=0,j=0;

    for(i=0;i<n-1;i++){
        if(str[i]=='.')
            ans+='0';
        else {
            j = i+1;
            if(str[j]=='.')
                ans+='1';
            else ans+='2';
            i++;
            j++;
        }
    }
    if(j!=n) ans+='0';
    cout<<ans<<endl;
}