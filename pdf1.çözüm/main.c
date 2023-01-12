#include <stdio.h>
#include <stdlib.h>

int main()
{  int ucbas,a,b,c,say2;
    printf("lütfen üç basamaklý bir sayý giriniz\n");
    scanf("%d",&ucbas);
    a=ucbas/100;
    b=(ucbas-100*a)/10;
    c=ucbas-100*a-10*b;
    say2=(a^(3))+(b^(3))+(c^(3));
    if (ucbas==say2)
    {
        printf("iki sayýda birbirin eþit\n");
    }
    else{
        printf("iki sayida birbirine eþit degil\n");
    }
    return 0;
}
