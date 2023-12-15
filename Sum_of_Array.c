#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
}