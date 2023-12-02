#include<stdio.h>
int main()
{
	int n,t1,p,c,t;
	scanf("%d",&n);
	t1=n/4;
	p=n%4;
	c=0;
	while(p!=0)
	{
		c=c+1;
		p=p/10;
	}
	t=t1+c;
	printf("%d",t);
	
}