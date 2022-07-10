#include<stdio.h>
int prime(int num)
{
    int c=0,i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i)==1)
        {
            printf("%d
",i);
        }
    }
    return 0;
}