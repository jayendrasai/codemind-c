#include<stdio.h>
int main()
{
    float x,y,p,d;
    scanf("%f%f",&x,&y);
    p=y-x;
    d=((p/x)*100);
    printf("%.2f",d);
}