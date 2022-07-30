#include<stdio.h>
int main()
{
    int n,a,b,ar[100],min=99,c=0;
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
            if(ar[i]<min)
            {
                min=ar[i];
                c++;
            }
        }
    }
    if(c==0)
    printf("-1");
    else
    printf("%d",min);
}