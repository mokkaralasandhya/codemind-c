#include<stdio.h>
int main()
{
    int n,m,a[100][100],max;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int j=0;j<m;j++)
    {
        max=0;
        for(int i=0;i<n;i++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
        printf("%d
",max);
    }
}