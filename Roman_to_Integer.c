#include<stdio.h>
#include<string.h>
int func(char k)
{
    if(k=='I')
    return 1;
    if(k=='V')
    return 5;
    if(k=='X')
    return 10;
    if(k=='L')
    return 50;
    if(k=='C')
    return 100;
    if(k=='D')
    return 500;
    if(k=='M')
    return 1000;
    return -1;
    
}

int main()
{
    int i,k,l,c=0;
    char s[100];
    scanf("%s",s);
    l=strlen(s);
    
    int res=0,s1,s2;
    i=0;
    while(i<l)
    {
        s1=func(s[i]);
        if(i+1<l)
        {
            s2=func(s[i+1]);
            if(s1>=s2)
            {
                res+=s1;
                i+=1;
            }
            else
            {
                res=res+s2-s1;
                i+=2;
            }
        }
        else
        {
            res+=s1;
            i+=1;
        }
    }
  printf("%d",res);
}