#include <stdio.h>
#include <stdlib.h>

int main()

{
    int say,sayac,top;

    printf("lutfen bir say� giriniz\n");
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
        printf("say� m�kkemmel sayi\n");
    }
    else{printf("say� mukemmle degil\n");}
    return 0;
}
