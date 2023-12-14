#include<stdio.h>
int sai(int n)
{
	int s=0,r,k;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	n=s;
	return n;
}
int main()
{
	int n,k,s;
	scanf("%d",&n);
	k=sai(n);
	while(k>=10)
	{
	  if(k>=10)
	{
		k=sai(k);
	}
	else
	{
		printf("%d",k);
		break;
	}
    }
	printf("%d",k);
}