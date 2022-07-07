#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,c=0,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<(n-1);i++)
    {
        if(arr[i-1]%2!=0&&arr[i+1]%2!=0)
        {
            if(arr[i]%2==0)
            {
                c++;
            }
        }
        
    }
    printf("%d",c);
}