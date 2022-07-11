#include<stdio.h>
int rev(int num)
{
    int re=0,r;
    while(num>0)
    {
        r=num%10;
        re=(re*10)+r;
        num/=10;
    }
    return re;
}
int main()
{
    int a;
    scanf("%d",&a);
    int ar=rev(a);
    int c=a*a,d=ar*ar;
    if(c==rev(d))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}