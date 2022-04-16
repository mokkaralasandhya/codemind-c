#include<stdio.h>
int main()
{
    int N,r,sum=0,l,count=0;
    scanf("%d",&N);
    l=N;
    while(N!=0)
    {
        r=N%10;
        sum+=r;
        N/=10;
    }
    if(l%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}