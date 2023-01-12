#include <stdio.h>
#include <stdlib.h>

int main()
{ int say,max,sayac;
sayac=0;
max=say;
    printf("lütfen bir saayi giriniz\n");
    scanf("%d",&say);
    while(say!=1)
    {
        if(say%2==0)
        {
            say=say/2;
        }
        else
            {
                say=(say*3)+1;
            }
        if(max<say)
        {
            max=say;
        }
        sayac++;

    }

    printf(" sayaç no su %d \n",sayac);
    printf("max deger %d \n",max);

    return 0;
}
