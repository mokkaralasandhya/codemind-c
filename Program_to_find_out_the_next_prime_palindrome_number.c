#include<stdio.h>
int main()
{
    int n,i,rev=0,r,m,temp,fact=0;
    scanf("%d",&n);
    i=n+1;
    while(i>0)
    {
        rev=0;
        temp=i;
        fact=0;
        while(temp>0)
        {
            r=temp%10;
            rev=(rev*10)+r;
            temp/=10;
        }
        if(i==rev)
        {
            for(m=1;m<=i;m++)
            {
                if(i%m==0)
                {
                    fact++;
                }
            }
            if(fact==2)
            {
                printf("%d",i);
                break;
            }
        }
        i++;
    }
    return 0;
}