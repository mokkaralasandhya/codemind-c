#include<stdio.h>
int main()
{
    int n,b[100],tot;
    scanf("%d",&n);
    for(int m=0;m<n;m++)
    { int sum=0,a,l;
        scanf("%d",&a);
        l=a;
        for(int i=0;i<a-1;i++)
        {
            scanf("%d",&b[i]);
            sum=sum+b[i];
        }
        tot=l*(l+1)/2;
        printf("%d
",tot-sum);
    }
}