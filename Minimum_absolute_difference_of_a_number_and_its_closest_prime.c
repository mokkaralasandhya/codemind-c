#include<stdio.h>
int main()
{
    int a,b,f=0,n,i,j,fwd,bwd;
    scanf("%d",&n);
    a=n;b=n;
    while(1)
    {
        f=0;
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            fwd=a-n;
            break;
        }
        a++;
    }
    while(1)
    {
        f=0;
        for(i=1;i<=b;i++)
        {
            if(b%i==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            bwd=n-b;
            break;
        }
        b--;
    }
    if(fwd==0 && bwd==0)
    {
        printf("%d",fwd);
    }else if(fwd<bwd)
    {
        printf("%d",fwd);
    }else{
        printf("%d",bwd);
    }
    return 0;
}