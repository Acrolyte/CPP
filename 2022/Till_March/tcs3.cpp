#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;

int main() {
    LL n; cin>>n;
    char arr[n];
    LL count=0;
    for(LL i=0;i<n;i++) {
        cin>>arr[i];
        if(arr[i]=='O') count++;
    }
    if(count==0 || count==n) {
        cout<<0<<" "<<0;
        return 0;
    }
    LL tkh=0;
    for(LL j=0;j<count;j++) {
        if(arr[j]=='O') tkh++;
    }
    LL fincnt=tkh;
    LL work=1;
    for(LL i=count;i<n;i++) {
        if(arr[i]=='O') tkh++;
        if(arr[i-count]=='O') tkh--;
        if(tkh > fincnt) {
            work=0;
            fincnt=tkh;
        }
        if(tkh==fincnt) work++;
    }
    LL ans1=count-fincnt;
    cout<<ans1<<" "<<work;
    return 0;
}