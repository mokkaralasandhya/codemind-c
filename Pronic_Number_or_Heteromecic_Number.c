#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pr,i,n,flg;
    scanf("%d",&pr);
    for(i=1;i<=pr;i++)
    {
        if(i*(i+1)==pr)
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}