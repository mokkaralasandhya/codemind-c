#include<stdio.h>
int main()
{
    int n,a[100],f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {int c=0;
        for(int j=0;j<n;j++)
        {
           if(a[i]==a[j])
           c++;
        }
        if(c==1)
        {
            printf("%d ",a[i]);
            f++;
        }
    }
    if(f==0)
    printf("-1");
}


