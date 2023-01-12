#include <stdio.h>
#include <stdlib.h>

int main()

{
    int say,sayac,top;

    printf("lutfen bir sayý giriniz\n");
    scanf("%d",&say);
    top=1;
    sayac=2;
    while(say>sayac)
    {
        if(say%sayac==0)
        {
            top=top+sayac;
        }
        sayac++;
    }
    if(top=say)
    {
        printf("sayý mükkemmel sayi\n");
    }
    else{printf("sayý mukemmle degil\n");}
    return 0;
}
