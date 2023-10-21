#include<stdio.h>
int main()
{
	int x,i,s;
	scanf("%d",&x);
	s=0;
	i=1;
	while(i<x)
	{
		if(x%i==0)	
		s=s+i;
	i=i+1;
	}
	printf("%d ",s);
}