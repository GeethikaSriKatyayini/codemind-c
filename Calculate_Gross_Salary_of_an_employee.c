#include<stdio.h>
int main()
{
    float b,hra,da,pf,gs;
    scanf("%f%f%f",&b,&da,&hra);
    pf=0.12*b;
    gs=b+da+hra+pf;
    printf("%0.2f
%0.2f",pf,gs);
}