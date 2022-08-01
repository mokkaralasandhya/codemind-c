#include<stdio.h>
int main()
{
    int a[100],n,k,sum=0,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n/2;i++)
    {
        sum+=a[i];
    }
    for(int i=n/2;i<n;i++)
    {
        s+=a[i];
    }
    printf("%d",s-sum);
}