#include<stdio.h>
int main()
{
	int n,a[100],max=0,s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	for(int j=1;j<max;j++)
	{
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==j)
			{
				c++;
			}
		}
		if(c==0)
		{
		printf("%d",j);
		s=1;
		break;
	    }
		
	}
	if(s==0)
	printf("%d",max+1);
	
}