#include<stdio.h>
int main()
{
    int ar[100],n,k,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=k)
        {
            sum=sum+ar[i];
        }
    }
    printf("%d",sum);
}




