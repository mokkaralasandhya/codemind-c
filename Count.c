#include<stdio.h>
int main()
{
    int n,a[100],c=0,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
        if(a[i]%2==0)
        c++;
        else
        f++;
    }
    printf("%d %d",c,f);
}