#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l;
    scanf("%[^
]s",s);
    l=strlen(s);
    for(int i=l-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}