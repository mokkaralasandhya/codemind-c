#include<stdio.h>
int main()
{
    int i=1,n,f=0;
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            f=f+1;
        }
        i++;
    }
    if(f==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}