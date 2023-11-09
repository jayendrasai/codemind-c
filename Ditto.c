#include<stdio.h>
int main()
{
	int x,y,p,n;
	scanf("%d%d%d",&x,&y,&p);
	if(x>y)
	{
		n=x-y;
	}
	else
	{
		n=y-x;
	}
	if(n%(2*p)==0)
	{
		printf("YES");
	}
	else
	printf("NO");
}