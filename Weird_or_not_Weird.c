#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("weird");
    }
    else if(n%2==1&&2<n>5)
    {
        printf("not wird");
    }
    else if(n%2==1&&6<n>20)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}