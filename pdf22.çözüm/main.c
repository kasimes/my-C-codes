#include <stdio.h>
#include <stdlib.h>

int main()
{ int sayi,sayac,neg,poz;
sayac=0;
poz=0;
neg=0;

while(sayac<10)
{
    printf("l�tfen bir sayi giriniz\n");
    scanf("%d",&sayi);

    if(sayi>0)
    {
        poz=poz+1;
    }
    else
        {
            neg=+neg+1;
        }

    sayac++;
}

printf("pozitif say�lar�n say�s� %d\n",poz);
printf("negatiflerin say�s� %d\n",neg );


    return 0;
}
