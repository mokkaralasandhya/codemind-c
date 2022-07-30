#include<stdio.h>
int main()
{
    int a[100][100],n,m,s=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
        printf("%d ",s);
    }
}