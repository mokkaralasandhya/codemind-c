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
    if(c<=2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int l,f,dl,df,i;
    for(i=a;i>=0;i--)
    {
        if(prime(i)==1)
        {
            f=i;
            df=a-i;
            break;
        }
    }
    for(i=a;i<=10000;i++)
    {
        if(prime(i)==1)
        {
            l=i;
            dl=i-a;
            break;
        }
    }
    if(df==dl)
    {
        printf("%d",dl);
    }
    else if(df>dl)
    {
        printf("%d",dl);
    }
    else
    {
        printf("%d",df);
    }
    return 0;
}