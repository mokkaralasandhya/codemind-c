#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",a[i]);
            break;
        }
    }
    
}