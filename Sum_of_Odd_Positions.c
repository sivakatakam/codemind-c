#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}