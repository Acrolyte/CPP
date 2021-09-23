#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		string s;
		cin>>n>>k>>s;

		int ar[n+1]={};
		int i=1,a=1,b=0,flag=0,zn=0;
		vector<int> v;

		for (auto it:s)
		{
			if(it=='1'){
				zn++;
			 	ar[i]=i;
			 	v.push_back(i);
			 	if(flag==0) a=i;
			 	if(flag==1) b=i;
			 	flag++;
			}
			i++;
		}

		// for(i=1;i<n+1;i++)
		// 	cout<<ar[i]<<" ";
		// cout<<endl;


		int ans=0,dis=0;
		for(i=a+1;i<n+1;i++){
			if(ar[i]>0)
			{
				b=ar[i];
			}

			// if(b-k <= a+k);
			// else ans++;
			int tmp = abs((b-1)-(a+1));
			if(tmp<=k) ans++;
			// i = b;
			a=b;
			// if(dis>k) ans++;
		}
		if(k==0) ans=zn;

		cout<<ans<<endl;
	}
	return 0;
}