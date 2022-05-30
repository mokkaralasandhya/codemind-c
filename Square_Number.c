#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sq;
    scanf("%d",&n);
    r=sqrt(n);
    sq=r*r;
    if(sq==n)
    {
        printf("True");
    }
    else
    printf("False");
}