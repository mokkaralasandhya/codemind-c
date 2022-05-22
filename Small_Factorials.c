#include<stdio.h>
int main()
{
    int n,fact,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        fact=1;
        for(int j=1;j<=a[i];j++)
        {
            fact*=j;
        }
        printf("%d
",fact);
    }
}