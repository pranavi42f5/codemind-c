#include<stdio.h>
int main()
{
    int h,s,S;
    scanf("%d%d%d",&h,&s,&S);
    if(h>50 && s>60 && S>100)
    {
        printf("10");
    }
    else if(h>50 && s>60 && S<100)
    {
        printf("9");
    }
    else if(h<50 && s>60 && S>100)
    {
        printf("8");
    }
    else if(h>50 && s<60 && S>100)
    {
        printf("7");
    }
    else if (h>50 || s>60 || S>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}