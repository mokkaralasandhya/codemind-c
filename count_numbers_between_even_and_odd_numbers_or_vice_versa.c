#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<(n-1);i++)
    {
        if(arr[i-1]%2!=0 && arr[i+1]%2==0)
        {
            count++;
        }
        if(arr[i-1]%2==0 && arr[i+1]%2!=0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}