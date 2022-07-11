#include<stdio.h>
int main()
{
    int n,j=0,i,a=0,b=1,c;
    scanf("%d",&n);
    if((n==0)||(n==1))
    {
        printf("True");
    }
    else
    {
        c=a+b;
        while(c<n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        if(n==c)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}