#include<stdio.h>
int main()
{
	int l,b,w,c,a,x,y,z,d,p;
	scanf("%d%d%d%d",&l,&b,&w,&c);
	a=(l*b);
	x=((2*w)+l);
	y=((2*w)+b);
	z=(x*y);
	d=z-a;
	p=(d*c);
	printf("%d",p);
}