#include<stdio.h>
int main()
{
	int m,n,i,x;
	scanf("%d%d",&m,&n);
	x=0;
	for(i=m;i<=n;i++)
	{
		if(i%2==0 && i%3==0)
		{
			x=x+1;
		}
	}
	printf("%d",x);
}