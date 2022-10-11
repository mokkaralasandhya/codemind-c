#include<stdio.h>
#include<math.h>
int abs(int n,int x)
{
    int f,l,t1,t,r=1,i=0,d=0;
    t=n;
    t1=n;
    i=0;
    while(i<x)
    {
        r=r*10;
        
        i++;
    }
    l=n%r;
    n=t;
    while(n)
    {
        r=n%10;
        n=n/10;
        d++;
    }
    n=t1;
    while(d!=x)
    {
        n=n/10;
        d--;
    }
    f=n;
    return abs(f-l);
    
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d",abs(n,x));
}