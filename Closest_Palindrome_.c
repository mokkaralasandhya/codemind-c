#include<stdio.h>
int main()
{
    int n,i,j,rev=0,r,temp,next,prev,diff;
    scanf("%d",&n);
    i=n+1;
    j=n-1;
    while(i>0)
    {
        rev=0;
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            rev=(rev*10)+r;
            temp/=10;
        }
        if(i==rev)
        {
         next=i;
         break;
        }
        i++;
    }
    while(j>0)
    {
        rev=0;
        temp=j;
        while(temp>0)
        {
            r=temp%10;
            rev=(rev*10)+r;
            temp/=10;
        }
        if(j==rev)
        {
         prev=j;
         break;
        }
        j--;
    }
    if(next-n==n-prev)
    {
        printf("%d %d",prev,next);
    }else if(next-n>n-prev)
    {
        printf("%d",prev);
    }else{
        printf("%d",next);
    }
    return 0;
}