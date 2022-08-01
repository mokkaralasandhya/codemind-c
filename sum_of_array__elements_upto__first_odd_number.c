#include<stdio.h>
int main()
{
    int a[100],n,k,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        sum+=a[i];
        else
        break;
    }
    printf("%d",sum);
}