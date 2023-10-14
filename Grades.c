#include<stdio.h>
int main()
{
    int py,c,b,m,cs,t;
    float p;
    scanf("%d%d%d%d%d",&py,&c,&b,&m,&cs);
    t=py+c+b+m+cs;
    p=((t*100)/500.0);
    if(p>=90.0)
    printf("Grade A");
    else if(p>=80.0)
    printf("Grade B");
    else if(p>=70.0)
    printf("Grade C");
    else if(p>=60)
    printf("Grade D");
    else if(p>=40.0)
    printf("Grade E");
    else if(p<40.0)
    printf("Grade F");
}