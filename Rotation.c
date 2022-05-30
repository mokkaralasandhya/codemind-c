#include<stdio.h>
int main()
{
	int m,n,a[100],j,w;
	scanf("%d",&w);
for(int r=0;r<w;r++)
  {
	scanf("%d%d",&m,&n);
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
	for(int j=0;j<m-1;j++)
	{
		printf("%d ",a[j]);
	}
    printf("%d
",a[m-1]);
  }
}
