#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    int a[N],b[N];
    for(i=0;i<N;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("%d
",a[i]+b[i]);
    }
}