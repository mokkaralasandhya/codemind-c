#include<stdio.h>
int main()
{
    int arr[100],a,b,n,i,s=0,s1=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        s1+=0;
        else
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
if(c==0)
printf("-1");
}