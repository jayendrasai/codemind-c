#include<stdio.h>
int main()
{
    int m,hr,M;
    scanf("%d",&m);
    hr=m/60;
    M=m%60;
    printf("%d Hour(s) %d Minute(s)",hr,M);
}