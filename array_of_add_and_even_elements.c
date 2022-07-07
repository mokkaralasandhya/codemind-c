#include<stdio.h>
int main()
{
    int i,n,ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        printf("%d ",ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        printf("%d ",ar[i]);
    }
}