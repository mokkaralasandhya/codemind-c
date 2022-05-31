#include<stdio.h>
int main()
{
    int n,m,a[100],f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==m)
        {
           printf("%d ",a[i]);
           f++;
           a[i]=0;
        }
    }
    if(f==0)
    printf("-1");
}



