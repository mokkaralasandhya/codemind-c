#include<stdio.h>
int main()
{
    char s[1000];
    int c=0;
    scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        c++;
    }
    printf("%d",c+1);
}