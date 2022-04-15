#include<stdio.h>
int main()
{
    int N,i,j,c1=0,c2=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            c2=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                c2++;
            }
            if(c2!=2)
            c1++;
        }
    }
    printf("%d",c1);
}