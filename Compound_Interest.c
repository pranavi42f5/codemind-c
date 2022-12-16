#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);
    float ci;
    ci=(p*(pow((1.0+r/100.0),t)))-p;
    printf("%.2f",ci);
}