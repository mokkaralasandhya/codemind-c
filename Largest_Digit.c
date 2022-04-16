#include<stdio.h>
int main()
{
    int N,r,large=0;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        if(large<r)
        {
            large=r;
        }
        N/=10;
    }
    printf("%d",large);
}