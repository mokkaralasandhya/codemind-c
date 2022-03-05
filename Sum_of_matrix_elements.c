#include<stdio.h>
int main()
{
    int a[100][100],i,j,sum=0,M,N;
    scanf("%d %d",&M,&N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}