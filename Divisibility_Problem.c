#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=0;
	if(a%b==0)
	{
		printf("%d",c);
	}
	else if(a%b!=0)
	{
		while(a%b!=0)
		{
		   c=c+1;
		   a=a+1;	
		}
		printf("%d",c);
	}
}