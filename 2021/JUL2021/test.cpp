#include<bits\stdc++.h>
using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];

		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}

		int data;
		cin>>data;

		int l=0,mid,count=0;
		int f=n-1;

		while(l<=f)
		{		
			mid=(l+f)/2;
			if(a[mid]==data)
			{
				cout<<"element present at "<<mid<<endl;
				break;
			}
			else if(a[mid]<data)
				f=mid+1;
			else
				l=mid-1;

			count++;
		}

		if(f<l)
		{
			cout<<"Element  not present"<<endl;
		}
		cout<<"the total no of comparison is"<<count<<endl;

	}
	return 0;
}