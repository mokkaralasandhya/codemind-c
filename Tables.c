#include<stdio.h>
int main()
{
    int n,i=1,r,x;
    scanf("%d%d",&n,&r);
    if(r%2==0)
    {
    while(i<r)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i=i+2;
    }
    }
    else if(r%2!=0)
    {
       while(i<=r)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i=i+2;
    } 
    }
}