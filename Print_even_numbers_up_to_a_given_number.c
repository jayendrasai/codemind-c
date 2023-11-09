#include<stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	i=m;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}
}