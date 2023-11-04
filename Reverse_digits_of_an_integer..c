#include<stdio.h>
int main()
{
	int x,i,y;
	scanf("%d",&x);
	i=0;
	while(x>0)
	{
		y=x%10;
		i=i*10+y;
		x=x/10;
	}
      printf("%d
",i);
      
}