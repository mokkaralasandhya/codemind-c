#include<stdio.h>
int main()
{
    int ar[100],i,n,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(ar[i]%2!=0)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    printf("True");
    else
    printf("False");
}