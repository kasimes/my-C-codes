#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,ktop,kcarp;



    printf("lütefen deklemein köklerini giriniz!\n");
    scanf("%d %d",&x1,&x2);
    ktop=x1+x2;
    kcarp=x1+x2;
    if(ktop<0)
    {
        printf("x^2+%0.3dx",-1*ktop);
    }
    else
    {
        printf("\n x^2-%0.3dx",ktop);
    }
    if(kcarp<0)
    {
        printf("%0.3d",kcarp);

    }
    else
    {
        printf("+%0.3d",kcarp);



    }
    return 0;
}
