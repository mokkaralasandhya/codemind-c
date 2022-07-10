#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}