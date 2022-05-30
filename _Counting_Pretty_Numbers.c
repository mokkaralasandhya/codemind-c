#include<stdio.h>
int main()
{
    int n,a[1000],b[1000],i,sum=0,c=0,j,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=a[i];j<=b[i];j++)
        {
            c=0;
            while(j>0)
            {
                r=j%10;
                if(r==2 || r==3 || r==9)
                {
                    c++;
                }
                break;
                j/=10;
            }
            if(c>0)
            {
                sum++;
            }
        }
        printf("%d
",sum);
    }
    return 0;
}