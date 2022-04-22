#include<stdio.h>
#include<math.h>
int main()
{
    int N,m,te1,te2,count=0,sum=0;
    scanf("%d",&N);
    te1=N;
    te2=N;
    while(N>0)
    {
        m=N%10;
        count++;
        N/=10;
    }
    while(te1>0)
    {
        m=te1%10;
        sum+=pow(m,count);
        te1/=10;
        count--;
    }
    if(sum==te2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}