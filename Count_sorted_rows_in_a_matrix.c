#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c=0;
    for(i=0;i<a;i++)
    {
        int flag=0;
        if(arr[i][0]>arr[i][1])
        {
            for(j=0;j<b-1;j++)
            {
                if(arr[i][j]>arr[i][j+1])
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        else
        {
            for(j=0;j<b-1;j++)
            {
                if(arr[i][j]<arr[i][j+1])
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}