#include<stdio.h>
int main()
{
	int n,a[100],max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{ max=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>max)
			{
				max=a[j];
			}
			a[i]=max;
		}
	}
	a[n-1]=-1;
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}