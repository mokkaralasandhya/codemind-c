#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    int k=n;
    int r;
    while(k!=0)
    {
        r=k%10;
        int f=1;
        for(int i=1;i<=r;i++)
        {
            f=f*i;
        }
        k=k/10;
        sum=sum+f;
    }
    if(sum==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
    return 0;
}