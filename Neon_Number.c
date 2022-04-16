#include<stdio.h>
int main()
{
    int N,sq,r,sum=0;
    scanf("%d",&N);
    sq=N*N;
    while(sq!=0)
    {
        r=sq%10;
        sum+=r;
        sq/=10;
    }
    if(sum==N)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}