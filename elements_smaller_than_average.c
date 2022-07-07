#include<stdio.h>
int main()
{
    int c=0,avg,arr[100],sum=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n+1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<avg)
        {
            c++;
        }
    }
    printf("%d",c);
}