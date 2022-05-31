#include<stdio.h>
int main()
{
    int n,a,b,ar[100],max=0,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d %d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(!(ar[i]>=a&&ar[i]<=b))
        {
            if(ar[i]>max)
            {
                max=ar[i];
                f++;
            }
        }
    }
    if(f==0)
    printf("-1");
    else
    printf("%d",max);
}


