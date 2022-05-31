#include<stdio.h>
int main()
{
    int x=0,n;
    char s[3];
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%s",s);
        if(s[2]=='+'||s[0]=='+')
        x=x+1;
        else
        x=x-1;
        
        n--;
    }
    printf("%d",x);
}