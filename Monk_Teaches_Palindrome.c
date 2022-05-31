#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char s[100],s1[100];
        int l,d=0,k;;
        scanf("%s",s);
        l=strlen(s);
        for(int j=l-1;j>=0;j--)
        {
            s1[d]=s[j];
            d++;
        }
        s1[d]=NULL;
        k=strcmp(s,s1);
        if(k==0)
        {
            if(d%2==0)
            {
                printf("YES EVEN
");
            }
            else
            printf("YES ODD
");
        }
        else
        printf("NO
");
    }
}