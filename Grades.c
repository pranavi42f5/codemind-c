#include<stdio.h>
int main()
{
    int p,c,b,m,k,per;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&k);
    float s;
    s=p+c+b+m+k;
    per=(s/500)*100;
    if (per>=90)
    {
        printf("Grade A");
    }
    else if(per<90&&per>=80)
    {
        printf("Grade B");
    }
    else if(per<80&&per>=70)
    {
        printf("Grade C");
    }
    else if(per<70&&per>=60)
    {
        printf("Grade D");
    }
    else if(per<60&&per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}