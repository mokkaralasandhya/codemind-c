#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            k=i;
        }
    }
    if(k==1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}