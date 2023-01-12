#include <stdio.h>
#include <stdlib.h>

int main()
{
    int say,sayac,top;
    printf("lütfen bir sayý giriniz\n");
    scanf("%d",&say);
    sayac=2;
    top=1;
    while(say>sayac)
    {
        if(say%sayac==0)
        {
            top=top+sayac;
        }
        sayac++;
    }
    if(say*2>top)
    {
        printf("güçsüz sayý\n");
    }
    else
    {
        printf("güçlü sayý\n");

    }
    return 0;
}
