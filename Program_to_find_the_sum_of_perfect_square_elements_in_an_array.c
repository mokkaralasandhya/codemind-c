#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1100],sum=0,r,l;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
      l=a[i];
      r=sqrt(l);
      if(r*r==a[i])
      {
          sum=sum+a[i];
      }
    }
    printf("%d",sum);
}