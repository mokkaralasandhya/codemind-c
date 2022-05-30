
#include<stdio.h>
int main()
{
    int n,a[100],sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            sum=sum+a[i];
        }
        else
        sum1=sum1+a[i];
    }
    if((sum-sum1)%4==0)
    printf("X");
    else
    printf("Y");
}