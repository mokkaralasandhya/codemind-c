#include<stdio.h>
int main()
{
    int n,r,a[100],c,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        if(a[i]==0)
        {
            c=1;
        }
        while(a[i])
        {
            r=a[i]%10;
            c++;
            a[i]/=10;
        }
        printf("%d ",c);
    }
}