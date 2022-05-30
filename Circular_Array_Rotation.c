#include<stdio.h>
int main()
{
	int m,n,a[100],j,w,v;
	scanf("%d%d%d",&m,&n,&w);
	for(int j=0;j<m;j++)
	{
		scanf("%d",&a[j]);
	}
	for(int i=0;i<n;i++)
	{ int p=a[m-1];
		for(j=m-1;j>0;j--)
		{
		  a[j]=a[j-1];	
		}
		a[0]=p;
		
	}
	for(int j=0;j<w;j++)
	{
	   scanf("%d",&v);
	   printf("%d
",a[v]);
	}
}