#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int diz[10],i,b[10],k;

    printf("l�tfen dizi elamanlar�n� giriniz\n");

    for(i=0;i<10;i++)
    {
            scanf("%d",&diz[i]);

    }
    printf("l�tfen �arpmak istedi�iniz sayu�y� giriniz\n");
        scanf("%d",&k);
    for(i=0;i<=10;i++)
    {


        b[i]=(k)*diz[i];
        printf("%d",b[i]);
    }
    return 0;
}
