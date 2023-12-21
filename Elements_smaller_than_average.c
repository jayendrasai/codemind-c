#include<stdio.h>
int main()
{
	int n,i,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	int z=s/n;
	int c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<=z)
		{
			c=c+1;
		}
	}
	printf("%d",c);
}