#include<stdio.h>
int main()
{
	int n,i,j,p,x,y,f;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=x;
		f=0;
		for(j=1;j<=x;j++)
		{
			p=j*j;
			if(p==y)
			{
				f=1;
				break;
			}
			else if(p!=y)
			{
				f=0;
		//	printf("FALSE");
		    }
		}
		if(f==1)
		{
		printf("True");
	    }
		else if(f!=1)
		{
		printf("False");
	    }
		printf("
");
	}
}