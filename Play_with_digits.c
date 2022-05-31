#include<stdio.h>
int main()
{
    int a[100],n,sum=0,r,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    { m=a[i];
        while(m!=0)
        {
            r=m%10;
            sum=sum+r;
            m=m/10;
        }
    }
    printf("%d",sum);
    
}