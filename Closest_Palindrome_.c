#include<stdio.h>
int main()
{
    int n,l,m,min,max,r;
    scanf("%d",&n);
    for(int i=n-1;i>=0;i--)
    {
        l=i;
        int sum=0;
        while(l!=0)
        {
            r=l%10;
            sum=sum*10+r;
            l/=10;
        }
        if(sum==i)
        {
            min=i;
            break;
        }
    }
    for(int i=n+1;;i++)
    {
        l=i;
        int sum=0;
        while(l!=0)
        {
            r=l%10;
            sum=sum*10+r;
            l/=10;
        }
        if(sum==i)
        {
            max=i;
            break;
        }
    }
    int r1=n-min;
    int r2=max-n;
    if(r1==r2)
    printf("%d %d",min,max);
    else if(r1>r2)
    printf("%d",max);
    else
    printf("%d",min);
}