#include<stdio.h>
int main()
{
    char str[50];
    int i,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            c=c+1;
        }
    }
    printf("%d",c);
}