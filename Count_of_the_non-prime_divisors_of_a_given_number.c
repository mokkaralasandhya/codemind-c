#include<stdio.h>
int main()
{
    int n,i,fact=0,j,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fact=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    fact+=1;
                }
            }
            if(fact!=2)
            {
                count+=1;
            }
        }
    }
    printf("%d",count);
    return 0;
}