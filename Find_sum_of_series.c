#include<stdio.h>
int main()
{
    float n;
    float tot=0;
    scanf("%f",&n);
    for(float i=1;i<=n;i++)
    {
        tot=tot+(1/i);
    }
    printf("%.2f",tot);
}