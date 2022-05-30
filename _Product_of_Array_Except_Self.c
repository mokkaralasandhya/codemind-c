#include<stdio.h>
int main()
{
    int n,a[100],m=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m=m*a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",m/a[i]);
    }
}