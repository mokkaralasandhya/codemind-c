#include<stdio.h>
int main()
{
    int n,temp,rev=0,m,fact1=0,fact2=0;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        m=temp%10;
        rev=(rev*10)+m;
        temp/=10;
    }
    for(m=1;m<=n;m++)
    {
        if(n%m==0)
        {
            fact1++;
        }
    }
    for(m=1;m<=rev;m++)
    {
        if(rev%m==0)
        {
            fact2++;
        }
    }
    if(fact1==2&&fact2==2)
    {
        printf("circular prime");
    }
    else if(fact1==2&&fact2!=2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}