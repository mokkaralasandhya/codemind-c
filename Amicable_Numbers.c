#include<stdio.h>
int main()
{
    int i,n1,n2,div1=0,div2=0;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            div1+=i;
        }
    }
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
            div2+=i;
        }
    }
    if(n1==div2&&n2==div1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
}