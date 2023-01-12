#include <stdio.h>
#include <stdlib.h>

int main()
{ int say1,say2,sayac;
sayac=1;
say1=6;
    printf("lütfen bir sayý giriniz\n");
    scanf("%d",&say2);
    while(say2<=63&&say1!=say2)
    {
         printf("lütfen bir sayý giriniz\n");
         scanf("%d",&say2);
         sayac++;
         printf("tekrar deneyiniz\n");
    }

    printf("%d seferde sayýyý buldunuz\n",sayac);
    return 0;
}
