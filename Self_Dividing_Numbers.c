#include<stdio.h>
int main()
{
    int m,i,r=0,n,s=0,t,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        c=0;
        t=i;
        while(t)
        {
            r=t%10;
            if((r==0)||(i%r!=0))
            {
                c++;
            }
            t/=10;
        }
        if(c==0)
        {
            printf("%d ",i);
        }
    }
}