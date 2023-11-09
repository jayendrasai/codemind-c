#include<stdio.h>
int main()
{
	int n,m,k,r,i,x;
scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
			scanf("%d%d%d",&n,&m,&k);
	m=m-k;
	r=m-n;
	if(r>=0)
	{
		printf("YES
");
		
	}
	else
	printf("NO
");
}
}