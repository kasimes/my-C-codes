#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil;
    printf("l�tfen bir sene giriniz\n");
    scanf("%d",&yil);
    if(yil%4==0)
    {
        printf("art�k y�l\n");
    }
    else
    {
        printf("art�k y�l de�il");
    }
    return 0;
}

