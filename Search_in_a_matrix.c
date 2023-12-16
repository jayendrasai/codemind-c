#include<stdio.h>
int main()
{
	int r,c,i,j,z,f=0;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&z);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==z)
			{
				f=1;
			}
		}
	}
	if(f==1)
	printf("1");
	else if(f==0)
	printf("0");
}