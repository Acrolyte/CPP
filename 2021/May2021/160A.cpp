#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,n,i,j;
    cin >> n;
    std::vector<int> v(n);
    for (i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    int s1=0,s2=0;
    for(i=0;i<n;i++){
        s1 = s1+ v[i];
        for(j=i+1;j<n;j++)
            s2 = s2 + v[j];
        if(s1 > s2){
            cout << i+1;
            break;
        }else{
            s2=0;
        }
    }
    return 0;
}