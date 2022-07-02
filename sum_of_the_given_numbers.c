#include<stdio.h>
int main()
{
    int t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld
",a+b);
    }
}