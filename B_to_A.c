#include<stdio.h>
int main()
{

    int x,y,i;
    scanf("%d%d",&x,&y);
    if(y>x)
    {
    i=y;
    while(i>=x)
    {
    printf("%d ",i);
    i=i-1;
    }
    }
    else
    {
       i=x;
    while(i>=y)
    {
    printf("%d ",i);
    i=i-1;
    } 
    }
}