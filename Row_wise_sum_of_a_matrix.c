#include<stdio.h>
int main()
{
	int r,c,rsum,i,j;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		rsum=0;
		for(j=0;j<c;j++)
		{
		   rsum=rsum+a[i][j];	
		}
		printf("%d ",rsum);
	}
}