#include<stdio.h>
void check(int n)
{
    int l,s=0,sum=0,tot,m,r,r1,s2=0;
    l=n;
    while(l!=0)
    {
        r=l%10;
        s=s*10+r;
        l=l/10;
    }
    tot=n+s;
    m=tot;
    while(m!=0)
    {
        r1=m%10;
        s2=s2*10+r1;
        m=m/10;
    }
    if(s2==tot)
    {
        printf("%d",tot);
    }
    else
    check(tot);
    
    
}
int main()
{
    int n;
    scanf("%d",&n);
    check(n);
}