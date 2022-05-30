#include<stdio.h>
int main()
{
    int nt,e;
    scanf("%d",&nt);
    for(e=0;e<nt;e++)
    {
        int i,j,a,b,arr[500];
        scanf("%d%d",&a,&b);
        for(i=0;i<(a+b);i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<(a+b);i++)
        {
            for(j=i+1;j<(a+b);j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=0;i<(a+b)-1;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("%d
",arr[i]);
    }
}