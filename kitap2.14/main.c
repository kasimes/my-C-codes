#include <stdio.h>
#include <stdlib.h>
/* klavyeden girilen kelimenin harflerinin alfebedeki sýralarý kadar * bastýran algoritma*/
int main()
{
    int a,j;
    char B[100],i;
    printf("lütfen bir kelime giriniz\n");
    gets(B);
    for(i=0;B[i]!='\0';i++)
    {
        a=i+1;

    }

    printf("dizini uzunlugu %d\n",a);
    for(i=0;i<a;i++)
    {
        printf(" %c \n",B[i]);
        printf("  -> "  );
        for(j=0;j<B[i]-64;j++)
        {
            printf("*");
        }
            printf("   ");
    }

    return 0;
}
