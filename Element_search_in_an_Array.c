#include<stdio.h>
int main()
{
	int n,f=0,z,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&z);
	for(i=0;i<n;i++)
	{
		if(z==a[i])
		{
		//	printf("True");
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("True");
	}
	else
	printf("False");
}