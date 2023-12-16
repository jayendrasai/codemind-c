#include<stdio.h>
int main()
{
	int n,i;
	//float av;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 int s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	float av=float(s)/n;
	printf("%.2f",av);
}