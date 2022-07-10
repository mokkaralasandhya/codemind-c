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
    int se=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            se+=arr[i][j];
        }
    }
    printf("%d",se);
    return 0;
}