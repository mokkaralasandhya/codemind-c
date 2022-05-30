#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m,a[100],c=0;
        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int j=0;j<m;j++)
        {int sum;
          for(int k=j+1;k<m;k++)
          {
              sum=a[j]+a[k];
              for(int g=0;g<m;g++)
              {
                  if(sum==a[g])
                  c++;
              }
          }
            
        }
        if(c>0)
        printf("%d
",c);
        else
        printf("%d
",-1);
    }
}