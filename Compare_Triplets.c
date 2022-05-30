#include<stdio.h>
int main()
{
    int a[3],b[3],l=0,n=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        l++;
        if(b[i]>a[i])
        n++;
    }
    printf("%d %d",l,n);
}