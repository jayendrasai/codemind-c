#include<stdio.h>
int main()
{
	int x,y,a,b,c,d,p,q;
	scanf("%d%d",&x,&y);
	a=500-(2*x);
	b=1000-(4*(x+y));
	c=1000-(4*y);
	d=500-(2*(x+y));
	p=a+b;
	q=c+d;
	if(p>q)
	printf("%d",p);
	else
	printf("%d",q);
}