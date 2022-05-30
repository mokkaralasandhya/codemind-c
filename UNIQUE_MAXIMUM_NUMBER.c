#include<stdio.h>
int main()
{
    int a[100],n,max=0,f=0;
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
            if(a[i]>max)
            max=a[i];
            f++;
        }
    }
    if(f>0)
    printf("%d",max);
    else
    printf("-1");
}