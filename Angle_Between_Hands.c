#include<stdio.h>
double calAngle(int hr,int min)
{
    double hrAngle = (hr%12)*30+(min/2.0);
    double minAngle = min*6;
    double Angle= hrAngle - minAngle;
    if(Angle < 0)
    {
        Angle *= -1;
    }
    if(Angle>180)
    {
        Angle=360-Angle;
    }
    return Angle;
}
int main()
{
    int hr,min;
    scanf("%d:%d",&hr,&min);
    double angle = calAngle(hr,min);
    printf("%.1f
",angle);
    return 0;
}