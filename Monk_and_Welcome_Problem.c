#include<stdio.h>
int main()
{
    int n,a[100],b[100],sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        printf("%d ",sum);
    }
}