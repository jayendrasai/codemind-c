#include<stdio.h>
int main()
{
    int c,f,s,n,i;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        if(i<=1)
        n=i;
        else
        n=f+s;f=s;s=n;
        printf("%d ",n);
    }
    
}