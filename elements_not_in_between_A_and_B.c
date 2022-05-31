
#include<stdio.h>
int main()
{
    int ar[100],n,a,b,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(!(ar[i]>=a&&ar[i]<=b))
        {
        printf("%d ",ar[i]);
        c++;
        }
    }
    if(c==0)
    printf("-1");
}

