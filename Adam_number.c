#include<stdio.h>
int main()
{
	int n,s=0,d,t=0,x,e,r;
	scanf("%d",&n);
	d=n*n;
	while(n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	e=s*s;
	while(e>0)
	{
		x=e%10;
		t=(t*10)+x;
		e=e/10;
	}
	if(t==d)
	printf("True");
	else
	printf("False");
}