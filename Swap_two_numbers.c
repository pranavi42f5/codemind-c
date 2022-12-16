#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c;
    c=a;
    a=b;
    printf("%d
",a);
    b=c;
    printf("%d",b);
}