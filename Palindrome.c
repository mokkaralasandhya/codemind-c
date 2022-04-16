#include<stdio.h>
int main()
{
    int N,r,sum=0,l;
    scanf("%d",&N);
    l=N;
    while(N!=0)
    {
        r=N%10;
        sum=sum*10+r;
        N/=10;
    }
    if(sum==l)
    printf("True");
    else
    printf("False");
}