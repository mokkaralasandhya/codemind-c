#include<stdio.h>
int main()
{
    int n,arr[100],sum=0,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        f=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                f++;
            }
        }
        if(f==0)
        {
            if(arr[i]%2==0)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
}