#include<stdio.h>
int main()
{
    int n1,a[100],max=0,k,i,j,c=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n1;i++)
    {
        if((a[i]+k)>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    
}