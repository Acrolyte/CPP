#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a1[n],a2[m];
    for(int i=0;i<n;i++)
    scanf("%d",&a1[i]);
    for(int i=n;i<n+m;i++)
    scanf("%d",&a1[i]);
    for(int i=0;i<n+m;i++)
    {
        if(a1[i]>a1[i+1])
        {
            int temp;
            temp=a1[i];
            a1[i]=a1[i+1];
            a1[i+1]=temp;
        }
        printf("%d",a1[i]);
    }
}