#include<stdio.h>
int main()
{
    int n,a[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n]=a[0];
    a[n+1]=a[1];
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]%2==0&&a[i+1]%2!=0)
        {
            c++;
        }
        if(a[i-1]%2!=0&&a[i+1]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}