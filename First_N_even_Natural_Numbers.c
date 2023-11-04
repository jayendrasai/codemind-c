#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	i=1;
	i=n*2;
	while(i>0)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i--;
	}
}