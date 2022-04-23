#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,N,temp,sum=0;
    scanf("%d",&N);
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(N>0)
        {
            j=N%10;
            sum+=(j*j);
            N/=10;
        }
        N=sum;
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}