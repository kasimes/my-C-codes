#include <stdio.h>
#include <stdlib.h>

int main()
{


    int sayi1,sayi2;
    printf("lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    if(sayi1==sayi2)
    {
        printf("sanuc:%d=%d",sayi1,sayi2);
    }
    else if(sayi1>sayi2)
    {
          printf("sanuc:%d>%d",sayi1,sayi2);
    }
    else
    {
          printf("sanuc:%d<%d",sayi1,sayi2);
    }
    return 0;
}
