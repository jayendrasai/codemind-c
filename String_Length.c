#include<stdio.h>
int main()
{
	char str[20];
	int i,l=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		l=l+1;
	}
	printf("%d",l);
}