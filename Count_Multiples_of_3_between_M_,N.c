#include<stdio.h>
int main()
{
	int x,y,i,b;
	scanf("%d%d",&x,&y);
	i=x;
	b=0;
	while(i<=y)
	{
		if(i%3==0)
		{
			b=b+1;
		}
		i++;
	}
	printf("%d",b);
}