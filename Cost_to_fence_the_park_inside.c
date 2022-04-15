#include<stdio.h>
int main()
{
    int L,B,W,C,f_area;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=2*W||B<=2*W)
    printf("Impossible");
    else
    {
        f_area=(L*B)-((L-2*W)*(B-2*W));
        printf("%d",f_area*C);
    }
}