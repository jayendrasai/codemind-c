#include<stdio.h>
int main()
{
	int x,y,i,j,f,n;
	scanf("%d%d",&x,&y);
	for(i=(x+1);i<=y;i++)
	{
		f=1;
		n=i;
		for(j=2;j<n;j++)
		{
			if(n%j==0)
			{
				f=0;
				break;
			}
		}
		if(f==1)
		printf("%d
",n);
	}
}