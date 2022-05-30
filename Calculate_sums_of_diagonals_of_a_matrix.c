#include<stdio.h>
int main()
{
    int a[100][100],n,m,sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j)
           sum=sum+a[i][j];
        }
    }
    printf("Principal Diagonal:%d",sum);
    for(int i=0;i<n;i++)
    {
        sum1=sum1+a[i][n-i-1];
    }
    printf("
Secondary Diagonal:%d",sum1);
}