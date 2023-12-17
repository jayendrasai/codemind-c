#include<stdio.h>
int main()
{
	int n,f=1,i,t;
	scanf("%d",&n);
	t=n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			f=0;
		}
	}
	if(f==0)
	{
		printf("Not Prime");
	}
	else if(f==1)
	{
		printf("Prime");
	}
}