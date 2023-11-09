#include<stdio.h>
int main()
{
	int x,n,y;
	scanf("%d%d",&n,&x);
	y=(x*(x+1)/2);
	if(n>=y)
	{
		printf("YES");
	}
	else
	printf("NO");
}