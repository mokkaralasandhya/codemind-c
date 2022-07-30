#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],s=0,s1=0,n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            s+=a[i][j];
            else
            s1+=a[i][j];
        }
    }
    printf("%d %d",s,s1);
}