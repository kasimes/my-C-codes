#include <stdio.h>
#include <stdlib.h>

int main()
{  int ucbas,a,b,c,say2;
    printf("l�tfen �� basamakl� bir say� giriniz\n");
    scanf("%d",&ucbas);
    a=ucbas/100;
    b=(ucbas-100*a)/10;
    c=ucbas-100*a-10*b;
    say2=(a^(3))+(b^(3))+(c^(3));
    if (ucbas==say2)
    {
        printf("iki say�da birbirin e�it\n");
    }
    else{
        printf("iki sayida birbirine e�it degil\n");
    }
    return 0;
}
