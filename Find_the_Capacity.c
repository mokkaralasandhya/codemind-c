#include<stdio.h>
int main()
{
    int s,t,b,cp;
    scanf("%d%d%d",&s,&t,&b);
    cp=2*s*t*b*512;
    printf("%dKB",cp/1024);
}


