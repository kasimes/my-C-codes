#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayi;
    printf("Bir sayi giriniz...");
    scanf("%d",&sayi);
    int tersi;
    while (sayi>0){
        tersi=sayi%10;
        printf("%d\t",tersi);
        sayi=sayi/10;

    }
}
