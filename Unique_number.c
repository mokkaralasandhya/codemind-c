#include<stdio.h>
int main()
{
    int n,m,temp,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        m=n%10;
        if(m==1){one++;}
        if(m==2){two++;}
        if(m==3){three++;}
        if(m==4){four++;}
        if(m==5){five++;}
        if(m==6){six++;}
        if(m==7){seven++;}
        if(m==8){eight++;}
        if(m==9){nine++;}
        if(m==10){zero++;}
        n/=10;
    }
    if(one<=1 && two<=1 && three<=1 && four<=1 && five<=1 && six<=1 && seven<=1 && eight<=1 && nine<=1 && zero<=1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}