#include<stdio.h>
int main()
{
	int x,a,c,r,t;
	scanf("%d",&x);
	if(x%10==0)
{
	t=x/10;
	printf("%d",t);
}
else if(x%5==0 || x%10==0)
	{
		t=x/10;
		c=0;
		r=x%10;
	while(r!=0)
	{
	c=c+1;
	r=r/10;
	}
	a=t+c;
	printf("%d",a);
}
else
printf("-1");
}