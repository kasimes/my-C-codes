#include <stdio.h>
#include <stdlib.h>

int main()
{ int a ,enb,b;

    printf("l�tfen a say�s�n� giriniz\n");
    scanf("%d",&a);
    b=0;
    enb=0;
    while((a/10)<10==b)
    {
        if(b<enb)
        {
            enb=b;
            a=b;
        }
    }
    printf("%d",b);
    return 0;
}
