#include<stdio.h>
int main()
{
    int sum=0,r,n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    printf("%d",sum);
}