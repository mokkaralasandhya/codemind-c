#include<stdio.h>
int main()
{
    long int n,sqr,rev1=0,rev2=0,m,sount=0,count=0;
    scanf("%ld",&n);
    sqr=n*n;
    while(n>0)
    {
        m=n%10;
        sount++;
        rev1=(rev1*10)+m;
        n/=10;
    }
    while(sqr>0)
    {
        m=sqr%10;
        count++;
        rev2=(rev2*10)+m;
        if(sount==count)
        {
            break;
        }
        sqr/=10;
    }
    if(rev1==rev2)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    return 0;
}