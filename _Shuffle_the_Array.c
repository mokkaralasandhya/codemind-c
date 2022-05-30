#include<stdio.h>
int main()
{
	int n,a[100],tot,i;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	tot=n/2;
	for(int i=0;i<(n/2);i++)
	{
       printf("%d %d ",a[i],a[i+tot]);
	} 
}