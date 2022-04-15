#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int diviorscount=0;
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==9)
        {
            printf("%d ",i);
            diviorscount++;
        }
    }
    printf("
Total=%d",diviorscount);
    return 0;
}