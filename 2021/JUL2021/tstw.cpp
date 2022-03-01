#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ar1[20],ar2[30];
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ar1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>ar2[j];
    }
    sort(ar1,ar1+n);
    sort(ar2,ar2+m);

    int i=0,j=0;
    while(j<m)
    {
        if(ar1[i]!=ar2[j])
        {
            cout<<ar2[j];
            j++;
        }
        else
        {
            j++;
            i++;
        }

    }
    return 0;
}
