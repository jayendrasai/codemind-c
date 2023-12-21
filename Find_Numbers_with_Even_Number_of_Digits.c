#include<stdio.h>
int main()
{
	int n,c,k,i,x,r;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		c=0;
		x=a[i];
		while(x!=0)
		{
			r=x%10;
			c=c+1;
			x=x/10;
		}
		if(c%2==0)
		{
			k=k+1;
		}
		else if(c%2!=0)
		{
		   k=k;
		}
	}
	printf("%d",k);
	
}