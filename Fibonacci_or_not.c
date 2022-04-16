#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,i,N;
    scanf("%d",&N);
    for(i=2;i<N;++i)
    {
        n3=n1+n2;
        if(n3==N)
        {
            printf("True");
            break;
        }
        else if(n3>N)
        {
            printf("False");
            break;
        }
        n1=n2;
        n2=n3;
    }
    return 0;
}