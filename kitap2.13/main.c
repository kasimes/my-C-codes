#include <stdio.h>
#include <stdlib.h>
/* k�lavyeden girilen kelimenin her harfin s�ras�n� g�steren algoritma*/
int main()
{
    int i,a;

    char B[100];
 printf("l�tfen bir kelime giriniz!\n");
    gets(B);
    for(i=0;B[i]!='\0';i++)
    {
        a=i+1;

    }

    printf("dizini uzunlugu %d\n",a);
    for(i=0;i<a;i++)
    {
        printf("B[%d]:",i);

        printf("%c\n",B[i]);
    }
      return 0;
}
