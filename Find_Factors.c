#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    i=1;
    while(i<=x)
    {
        if(x%i==0)
        {
        	printf("%d ",i);
            
        }
        i=i+1;
    }
}