#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,top;

    top=0;
i=0;
    printf("l�tefen bir sayi giriniz\n");
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
        printf("say�n�z m�kkememl say�d�r \n");
    }
    else
        {
                printf("say�n�z m�kkemmel sayi degildlr\n");

        }


    return 0;
}
