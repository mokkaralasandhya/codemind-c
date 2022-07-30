#include<stdio.h>
int main()
{
    int a[100][100],n,m,e=0,o=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            e+=a[i][j];
            else
            o+=a[i][j];
        }
    }
    printf("%d %d",e,o);
}