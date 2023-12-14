#include<stdio.h>
int main()
{
	int n,t,i,s;
	scanf("%d",&n);
	t=n;
	s=0;
	for(i=1;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==t)
	{
		printf("PERFECT");
	}
	else if(s<t)
	{
		printf("DEFICIENT");
	}
	else if(s>t)
	{
		printf("ABUNDANT");
	}
}