#include<stdio.h>
int main()
{
    char s[100];
    int sum=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>'0' &&s[i]<='9')
        {
            sum=sum+s[i]-'0';
        }
    }
    printf("%d",sum);
}