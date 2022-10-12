#include<stdio.h>
int main()
{
    int m,n,i,arr[100],sum=0,j,d=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        sum=0;
        for(j=i;j<=n;j++)
        {
            sum=sum+j;
            if(sum%2!=0)
            {
                d++;
            }
        }
    }
    printf("%d",d);
}