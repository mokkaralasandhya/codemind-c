#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*arr,j,fact=0;
    int count=0,k;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf(" %d",&k);
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            if(arr[i]>=k)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}