#include<stdio.h>
int main()
{
    int u;
    float c,p,t,cpu;
    scanf("%d",&u);
    if(u<200)
    {
    cpu=1.20;
    c=u*cpu;
    p=0.00;
    t=c+p;
    }
    else if(u>=200 && u<400)
    {
    cpu=1.40;
    c=u*cpu;
    p=0.00;
    t=c+p;
    }
    else if(u>=400 && u<600)
    {
    cpu=1.60;
    c=u*cpu;
    p=(c*15)/100.0;
    t=c+p;
    }
    else if(u>=600 && u<800)
    {
    cpu=1.80;
    c=u*cpu;
    p=(c*15)/100.0;
    t=c+p;
    }
    else if(u>=800)
    {
    cpu=2.00;
    c=u*cpu;
    p=(c*15)/100.0;
    t=c+p;
    }
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",cpu);
    printf("Bill: %.2f
",c);
    printf("Surcharge: %.2f
",p);
    printf("Total Amount: %.2f",t);
}