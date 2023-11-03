#include<stdio.h>
int main()
{
    int x,a,i;
    scanf("%d",&x);
    a=0;
    while(x)
    {
     x=x/10;
     a=a+1;
    }
    printf("%d",a);
}