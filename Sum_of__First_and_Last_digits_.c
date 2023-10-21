#include<stdio.h>
int main()
{
	int x,s,a,n;
	scanf("%d",&n);
	a=n%10;
	while(n>=10)
	{
		n=n/10;
		}
x=n;
s=x+a;
printf("%d",s);
}