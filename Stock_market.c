#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("LOSS
");
        }
        else if(a==b)
        {
            printf("NEUTRAL
");
        }
        else
        {
            printf("PROFIT
");
        }
    }
}