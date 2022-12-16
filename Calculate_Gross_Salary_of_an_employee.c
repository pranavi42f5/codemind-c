#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf;
    pf=bs*12/100;
    float gs;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
}