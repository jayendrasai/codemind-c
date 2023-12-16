#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,s1=0,s2=0,i,ads;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			s1=s1+a[i];
		}
		else if(i!=0)
		{
			s2=s2+a[i];
		}
	}
	ads=abs(s1-s2);
	printf("%d",ads);
}