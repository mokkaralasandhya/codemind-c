#include<stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("0");
    }
     if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
       
    }
}

