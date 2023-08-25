#include<stdio.h>
int is_Prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i,n,count=2;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(is_Prime(i))
            {
                i++;
                continue;
            }
            else
            {
                count++;
            }
        }
    }
    printf("%d",count);
}