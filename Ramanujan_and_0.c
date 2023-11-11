#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if(m==0)
    {
        printf("1");
    }
    else
    {
        m=m*3;
        printf("%d",m);
    }
}