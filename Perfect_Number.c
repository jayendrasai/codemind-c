#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int s=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
//	printf("%d",s);
	if(s==n)
	printf("True");
	else if(s!=n)
	printf("False");
}