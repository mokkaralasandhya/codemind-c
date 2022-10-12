#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,arr[1000],j,k,c=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(k=0;k<n;k++)
        {
            if(arr[k]%2!=0)
            {
                c++;
            }
        }
        printf("%d
",c/2);
    }
}