#include<stdio.h>
int main()
{
	int x,y,a,b;
	scanf("%d%d",&x,&y);
	for(a=x+1;a<y;a++)
	{
		printf("%d ",a);
		printf("%d ",a*a);
		printf("%d
",a*a*a);
}
}