#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,k,tam=1,c;

    printf("tersten yazýlmasýný istediðiniz sayýsý giriniz\n");
    scanf("%d",&a);
    b=0;
    while(a>0)
    {
        k=a%10;


        b=b*10+b;
        a=tam*(a/10);
    }
    printf("%d",k);
    return 0;
}
