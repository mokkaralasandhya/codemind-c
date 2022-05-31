#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char s[1000];
        int c=0;
        scanf("%s",s);
        for(int j=0;s[j]!=NULL;j++)
        {
            if(s[j]>='0' && s[j]<='9')
            {
                c++;
            }
        }
        if(c!=0)
        printf("Yes
");
        else
        printf("No
");
    }
}