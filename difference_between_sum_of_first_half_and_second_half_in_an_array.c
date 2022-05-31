#include<stdio.h>
int main()
{
    int ar[100],n,k,sum=0,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n/2;i++)
    {
        sum=sum+ar[i];
    }
    for(int i=n/2;i<n;i++)
    {
        s=s+ar[i];
    }
    printf("%d",s-sum);
}



