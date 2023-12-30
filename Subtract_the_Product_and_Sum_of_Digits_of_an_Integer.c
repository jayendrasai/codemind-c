#include<stdio.h>
int main()
{
    int n,r,sum=0,pro=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n/=10;
        sum=sum+r;
        pro=pro*r;
        res=pro-sum;
        
    }
    printf("%d",res);
}