#include<stdio.h>
int main()
{
    int n,a[100],h;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=n/2;
    for(int i=n-1;i>=h;i--)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<h;i++)
    {
        printf("%d ",a[i]);
    }
}