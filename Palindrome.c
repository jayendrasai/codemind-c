#include<stdio.h>
int main()
{
	int n,i,j,z;
	scanf("%d",&n);
	z=n;
	i=0;
	while(n!=0)
	{
		j=n%10;
		i=(i*10)+j;
		n=n/10;
	}
	if(z==i)
	{
		printf("True");
		
	}
	else
	printf("False");

}