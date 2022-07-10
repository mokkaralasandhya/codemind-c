#include<stdio.h>
int main()
{
    int n,a[1000],i,res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            res+=a[i];
        }
    }
    printf("%d",res);
}