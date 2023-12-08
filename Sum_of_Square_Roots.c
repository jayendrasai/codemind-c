#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	float y,s;
	s=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		y=sqrt(i);
		s=s+y;
	}
	printf("%.2f",s);
	
}