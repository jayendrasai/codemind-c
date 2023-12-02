#include<stdio.h>
int main()
{
	int x,y,n,k,a,b1,b2,t,r;
	scanf("%d%d%d%d",&n,&k,&x,&y);
	a=(k*x);
	r=n-k;
	b1=(r*x);
	b2=(r*y);
	if(r==0)
	{
		printf("%d",a);
	}
	else if(r!=0)
	{
    b1=(r*x);
	b2=(r*y);
	 if(b1<b2)
	{
		t=a+b1;
		printf("%d",t);
	}
	else if(b2<b1)
	{
		t=a+b2;
		printf("%d",t);
	}
}
}