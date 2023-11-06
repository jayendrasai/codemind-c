#include<stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	a=0;
	while(n)
	{
		b=n%10;
		a=(a*10)+b;
		n=n/10;
	}
	printf("%d",a);
}