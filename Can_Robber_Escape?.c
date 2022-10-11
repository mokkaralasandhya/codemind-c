#include<stdio.h>
int main()
{
    int N,i,A[50],odd=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<N;i++)
    {
        if(A[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    printf("YES");
    else
    printf("NO");
    return 0;
}