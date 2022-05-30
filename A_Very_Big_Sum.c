#include<stdio.h>
int main()
{
    int n;
    long long int a[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }

    printf("%lld",sum);
}