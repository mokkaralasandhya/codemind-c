#include<stdio.h>
int main()
{
    int n,a[100],sq,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sq=a[i]*a[i];
        a[i]=sq;
    }
    for (int i = 0; i < n; ++i)
    {
      for (int j = i + 1; j < n; ++j)
      {
         if (a[i] > a[j])
         {
            b= a[i];
            a[i] = a[j];
            a[j] = b;
         }
      }
   }
   for(int i=0;i<n;i++)
   printf("%d ",a[i]);
}