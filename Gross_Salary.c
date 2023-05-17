#include<stdio.h>
int main()
    {
        int b;
        scanf("%d",&b);
        float hra,da;
        if(b<=10000)
        {
            da=0.8*b;
            hra=0.2*b;
        }
        else if(b<=20000)
        {
            da=0.9*b;
            hra=0.25*b;
        }
        else if(b>20000)
        {
            da=0.95*b;
            hra=0.3*b;
        }
        float gs;
        gs=b+hra+da;
        printf("%0.2f",gs);
    }