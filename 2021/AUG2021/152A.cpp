#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,x,i,j;
	cin>>n>>m;
	int a[n][m];

	string xt;
	for(i=0;i<n;i++){		
		cin>>xt;
		j=0;
		for(auto st: xt){
			int tmp = st - '0';
			a[i][j]= tmp;
			j++;
		}
	}

	// for(i=0;i<n;i++){
	// 	for(j=0;j<m;j++)
	// 		cout<<a[i][j]<<" ";
	// }

	int s[n];
	for(i=0;i<n;i++){
		s[i]=0;
	}

	for(j=0;j<m;j++){
		int max=INT_MIN;

		for(i=0;i<n;i++){
			// cout<<a[i][j]<<" ";
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
		for(i=0;i<n;i++){
			if(a[i][j]==max){
				s[i]=1;
			}
		}
	}

	int ans=0;
	for(i=0;i<n;i++){
		// cout<<"res= "<<s[i]<<endl;
		if(s[i]==1){ 
			// cout<<"pos= "<<i<<endl;
			ans++;
		}
	}
	cout<<ans;

	return 0;
}