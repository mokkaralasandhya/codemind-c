#include<stdio.h>
int main()
{
    int r,sum=0,p=1,n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        p*=r;
        n/=10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}