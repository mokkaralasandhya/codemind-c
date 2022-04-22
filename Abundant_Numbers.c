#include<stdio.h>
int main()
{
    int i,sum=0,N;
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        if(N%i==0)
        {
            sum+=i;
        }
    }
    if(sum>N)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}