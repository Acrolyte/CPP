#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a,b,sum1,sum2,sum3;
	cin >> n >> m >> a >> b;
	
	if(n<m){
		sum1 = b;
	}
	else{
		if(a>b){ 
			sum1 = n/m * b;
			if(n%m>0) sum1 = sum1 + b;
		}
		else {
			sum1 = n/m * b + n%m * a;
			// if(n%m>0) sum1 = sum1 + a;
		}
	}
	sum2 = n*a;
	cout << min(sum1,sum2);
	return 0;
}