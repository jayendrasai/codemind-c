#include<stdio.h>
int main()
{
    int n,c,i;
    scanf("%d",&n);
    c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    printf("Not Prime");
    
}