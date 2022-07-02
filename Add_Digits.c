#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    while(n/10!=0)
    {
        s=0;
        while(n!=0)
        {
            r=n%10;
            s+=r;
            n/=10;
        }
        n=s;
    }
    printf("%d",s);
}