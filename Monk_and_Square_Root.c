#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        long long int c=0,a,b,i;
        scanf("%lld%lld",&a,&b);
        for(i=0;i<b;i++)
        {
            if((i*i)%b==a)
            {
                printf("%lld
",i);
                c++;
                break;
            }
        }
        if(c==0)
        printf("-1
");
    }
}