#include<stdio.h>
#include<math.h>
int size(int num)
{
    int c=0;
    while(num>0)
    {
        c++;
        num/=10;
    }
    return c;
}
int rev(int num)
{
    int s=0,r;
    while(num>0)
    {
        r=num%10;
        s=(s*10)+r;
        num/=10;
    }
    return s;
}
int main()
{
    int a;
    scanf("%d",&a);
    int ar=rev(a);
    int i,sum=0,c=size(a),j=1;
    while(ar>0)
    {
        int dig=ar%10;
        sum+=pow(dig,j);
        j++;
        ar/=10;
    }
    if(sum==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}