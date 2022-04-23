#include<stdio.h>
int main()
{
    int a,b,i,num,r,temp,sum,count;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%10!=0)
        {
            sum=0;count=0;num=i;temp=i;
            while(num>0)
            {
                r=num%10;
                sum++;
                if(r==0)
                {
                    break;
                }
                if(temp%r==0)
                {
                    count++;
                }
                num/=10;
            }
            if(sum==count)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;
}