#include<stdio.h>
int main()
{
    int a[100],n,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
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
        if(c==a[i])
        {
            printf("%d ",a[i]);
            f++;
            a[i]=0;
        }
    }
    if(f==0)
    printf("-1");
}