#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char s[100];
        int len,c=0;
        scanf("%s",s);
        len=strlen(s);
        for(int j=0;s[j]!=NULL;j++)
        {
            if(s[j]>='0'&&s[j]<='9')
            {
                c++;
            }
        }
        if(c==len)
        printf("True
");
        else
        printf("False
");
    }
}