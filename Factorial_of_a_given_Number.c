#include<stdio.h>
int main()
{
	int x,i,y;
	scanf("%d",&x);
	i=1;
	y=1;
	while(i<=x)
	{
		y=y*i;
		i=i+1;
	}
	printf("%d",y);
}