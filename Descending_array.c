#include<stdio.h>
int main()
{
    int a[100],n,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    printf("no");
}


