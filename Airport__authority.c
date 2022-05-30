#include<stdio.h>
int main()
{
    int n,t,a[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(int i=0;i<n;i++)
    {
        if(a[i]>t)
        sum=sum+2;
        else
        sum=sum+1;
    }
    printf("%d",sum);
}