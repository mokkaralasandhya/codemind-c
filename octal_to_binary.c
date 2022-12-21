#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0;
    while(s[i])
    {
        switch(s[i])
        {
            case '0':printf("000");break;
            case '1':
            if(i>0)
            printf("001");
            else
            printf("1");
            break;
            case '2':
            if(i>0)
            printf("010");
            else
            printf("10");
            break;
            case '3':
            if(i>0)
            printf("011");
            else
            printf("11");
            break;
            case '4':printf("100");break;
            case '5':printf("101");break;
            case '6':printf("110");break;
            case '7':printf("111");break;
        }
        i++;
    }
    return 0;
}