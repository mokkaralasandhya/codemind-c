#include<stdio.h>
int main()
{
    int n,m,mst=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        if(m>mst)
        {
            mst=m;
        }
        n/=10;
    }
    printf("%d",mst);
}