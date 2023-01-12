#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,top;

    top=0;
i=0;
    printf("lütefen bir sayi giriniz\n");
    scanf("%d",sayi);
    while(i<sayi)
    {
         if(sayi%i==0)
         {
             top=top+i;
         }
i++;
    }
         if(top=sayi)
    {
        printf("sayýnýz mükkememl sayýdýr \n");
    }
    else
        {
                printf("sayýnýz mükkemmel sayi degildlr\n");

        }


    return 0;
}
