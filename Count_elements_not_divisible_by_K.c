#include<stdio.h>
int main()
{
    int ar[100],n,k,count=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%k!=0)
        {
            count++;
        }
    }
    printf("%d",count);
}