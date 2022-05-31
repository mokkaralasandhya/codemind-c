





#include<stdio.h>
int main()
{
    int ar[100],n,k,r,sum=0,l[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {sum=0;
        scanf("%d",&ar[i]);
        l[i]=ar[i];
        while(ar[i]!=0)
        {
            r=ar[i]%10;
            sum=sum*10+r;
            ar[i]=ar[i]/10;
        }
        if(sum==l[i])
        c++;
    }
   printf("%d",c);
}
