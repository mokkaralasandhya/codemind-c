#include<stdio.h>
int main()
{
    int n,a[100],f=0,max=0,min=999;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    { int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==a[i])
        {
           if(a[i]>max);
           max=a[i];
           if(a[i]<min)
           min=a[i];
           f++;
        }
    }
    if(f==0)
    printf("-1");
    else
    printf("%d %d",min,max);
}



