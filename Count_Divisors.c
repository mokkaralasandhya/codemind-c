#include<stdio.h>
int main()
{
    int a,b,c,l=0;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            l++;
        }
    }
    printf("%d",l);
}