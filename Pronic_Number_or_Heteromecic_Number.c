#include<stdio.h>
int main()
{
 int n,i,flag=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     if(i*(i+1)==n)
     {
         flag++;
     }
 }
 if(flag!=0)
 {
     printf("YES");
 }
 else
 {
     printf("NO");
 }
}