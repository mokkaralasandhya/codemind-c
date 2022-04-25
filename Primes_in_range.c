#include<stdio.h>
#include<math.h>
int factorcount(int i)
{
    int j,fc=2,sq;
    sq=sqrt(i);
    if(i==1)
    {
        return 1;
    }
    for(j=2;j<=sq;j++)
    {
        if(i%j==0)
        {
            fc+=2;
        }
    }
    if(sq*sq==i)
    {
        fc-=i;
    }
    return fc;
}
int main()
{
    int i,n1,n2,fc,p=0;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        fc=factorcount(i);
        if(fc==2)
        {
            p++;
        }
    }
    printf("%d",p);
}