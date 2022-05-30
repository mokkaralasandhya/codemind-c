
#include<stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    { int c=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]>a[j])
                c++;
            }
        }
        printf("%d ",c);
    }
}