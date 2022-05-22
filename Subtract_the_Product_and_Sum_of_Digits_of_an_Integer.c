#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        mul*=r;
        n/=10;
    }
    printf("%d",mul-sum);
}