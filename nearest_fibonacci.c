#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,min,max;
    scanf("%d",&n);
    for(int i=1;;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        min=c;
        else
        {
            max=c;
            break;
        }
    }
    int r1=n-min;
    int r2=max-n;
    if(r1>r2)
    {
        printf("%d",max);
    }
    else if(r1==r2)
    {
        printf("%d %d",min,max);
    }
    else
    printf("%d",min);
}