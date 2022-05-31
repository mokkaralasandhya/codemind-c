#include<stdio.h>
int main()
{
    int n,a,b,ar[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=a&&ar[i]<=b)
        {
          printf("%d ",ar[i]);
          sum++;
        }
    }
    if(sum==0)
    printf("-1");
}




