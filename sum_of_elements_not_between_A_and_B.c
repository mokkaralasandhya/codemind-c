#include<stdio.h>
int main()
{
    int ar[100],n,a,b,sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=a&&ar[i]<=b)
        sum=sum+ar[i];
        else
        sum1=sum1+ar[i];
    }
    printf("%d",sum1);
}


