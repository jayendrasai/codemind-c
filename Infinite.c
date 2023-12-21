#include<stdio.h>
int main(){
    int n=0,i,s;
    for(i=1;i>0;i++)
    {
        scanf("%d",&n);
        if(n!=(-1)){
        s=n*n;
        printf("%d
",s);
        }
        else{
            break;
        }
    }
}
    