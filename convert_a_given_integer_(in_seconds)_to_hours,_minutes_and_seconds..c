#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h;
    h=a/3600;
    int m;
    m=(a%3600)/60;
    int s;
    s=(a%3600)%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}