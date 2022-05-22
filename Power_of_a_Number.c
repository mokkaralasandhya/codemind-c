#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    p=pow(a,b);
    printf("%d",p%c);
}