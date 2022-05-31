#include<stdio.h>
int main()
{
    int n,a[100],f=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    { int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}