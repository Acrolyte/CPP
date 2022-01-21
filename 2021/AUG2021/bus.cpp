#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,q,i;
		cin>>n>>m>>q;

		char ch;
		int bus[n+1]= {};
		int leng=0,flag=0;

		for(int x=0;x<q;x++){
			cin>>ch>>i;

			if(ch=='+'){
				bus[i]=1;
				leng++;
				if(leng>m and flag==0){
					flag=1;
					// break;
				}
			}
			else {
				bus[i]--;
				if(bus[i]<0 and flag==0){
					flag=1;
					// break;
				}
				leng--;
			}
			// for(int y=0;y<n+1;y++)
			// 	cout<<bus[y]<<" ";
			// cout<<endl;
			// cout<<leng<<endl;

		}	
		if(flag==0) cout<<"Consistent"<<endl;
		else cout<<"Inconsistent"<<endl;
		// cout<<endl;
	}

	return 0;
}