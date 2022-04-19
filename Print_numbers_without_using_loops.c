#include<stdio.h>
int main()
{
    int N,i=0;
    scanf("%d",&N);
    if(N>=1&&N<=10000)
    {
        begin:
        i+=1;
        printf("%d ",i);
        if(i<N)
        goto begin;
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
    return 0;
}