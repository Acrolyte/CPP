#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(i=0;i<n;++i)
#define repr(i,k) for(i=k;i>0;--i)


int main()
{

	int n=7;
	int A[n]= {20, 35, -15, 7, 55, 1, -22};

	int i,j,k=n;


	rep(i,k){

		repr(j,i){

			if(A[j]<A[j-1])
				swap(A[j],A[j-1]);

		}

	}

	rep(i,n)
		cout<<A[i]<<' ';

	return 0;
}