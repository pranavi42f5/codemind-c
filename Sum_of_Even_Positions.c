#include<stdio.h>
int main()
{
    int n,a[n],s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}