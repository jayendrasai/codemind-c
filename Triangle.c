#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x==y && x==z && y==z)
    printf("Equilateral triangle");
    else if(x==y || x==z || y==z)
    printf("Isosceles triangle");
    else
    printf("Scalene triangle");
}