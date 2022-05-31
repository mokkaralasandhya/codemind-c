#include<stdio.h>
int main()
{
    int ar[100],n,a,b,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(ar[i]%2==0)
       printf("%d ",ar[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(ar[i]%2!=0)
       printf("%d ",ar[i]);
    }
    
    
    
}