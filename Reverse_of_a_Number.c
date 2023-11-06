#include<stdio.h>
int main()
{
	int n,x,y;
	scanf("%d",&n);
	x=0;
	while(n)
	{
		y=n%10;
		x=(10*x)+y;
		n=n/10;
	}
	printf("%d",x);
}