#include<stdio.h>
int main()
{
    int a[100],n,c=0,r,m,sum=0,f;
  
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {f=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            sum=sum+a[i];
           c++;
        }
    }
  float  avg=float(sum)/float(c);
    printf("%0.2f",avg);
}





