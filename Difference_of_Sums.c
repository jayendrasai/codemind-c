#include<stdio.h>
int main()
{
	int n,i,a,b,c,d;
	scanf("%d",&n);
	i=1;
	a=0;
	b=0;
	while(i<=n)
	{
		a=a+i;
		b=b+(i*i);
		i++;
		c=a*a;	
	}
   printf("%d",c-b);
   
}