#include<stdio.h>
int main()
{
    int n,i,j,su=0,sum=0,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            f=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    f++;
                }
            }
            if(f==2)
            {
                if(su*i==n)
                {
                    printf("%d %d",su,i);
                    sum++;
                    break;
                }
                su=i;
            }
        }
    }
    if(sum==0)
    {
        printf("-1");
    }
}