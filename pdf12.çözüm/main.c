#include <stdio.h>
#include <stdlib.h>

int main()
{
    int say,sayac,top;
    printf("l�tfen bir say� giriniz\n");
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
        printf("g��s�z say�\n");
    }
    else
    {
        printf("g��l� say�\n");

    }
    return 0;
}
