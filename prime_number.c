#include<stdio.h>
int main()
{
    int n,i,fact=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        fact++;
    }
    if(fact==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}