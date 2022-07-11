#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n!=1&&n!=4)//least no.s are either 10 and 11 which means 1 and 4
    {
        s=0;
        while(n>0)
        {
            r=n%10;
            s=s+(r*r);
            n/=10;
        }
        n=s;
    }
    if(s==1 || s==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}