#include<stdio.h>
int main()
{
    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c&&b>c)
    m=a+b;
    else if(b>a&&c>a)
    m=b+c;
    else if(a>b&&c>b)
    m=a+c;
    printf("%d",m);
    
}