#include<stdio.h>
int main()
{	int x,y,z,a,b,i,p;
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
	z=i*x;
	if(z%y==0)
	{
		z=i*x;
		printf("%d",z);
		break;	
		}
	}
}