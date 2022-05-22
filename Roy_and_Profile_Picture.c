#include<stdio.h>
int main()
{
    int L,N,W,H;
    scanf("%d%d",&L,&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d%d",&W,&H);
        if(W<L || H<L)
        printf("UPLOAD ANOTHER
");
        else if(W==H)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}