#include<stdio.h>
int main()
{
    char s[100];
    int c=0;
    scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            c++;
        }
    }
    if(c>0)
    printf("Contains %d digit",c);
    else
    printf("Doesn't contain digit");
}