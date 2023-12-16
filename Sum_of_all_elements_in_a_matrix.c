#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int s=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	       s=s+a[i][j];
		}
	}
	printf("%d",s);
}