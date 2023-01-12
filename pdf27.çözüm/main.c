#include <stdio.h>
#include <stdlib.h>

int main()
{int sayac,asal;
asal=0;
sayac=2;
while(sayac<10)
{
    if(sayac/2==1||sayac/3==1||sayac/5==1||sayac/7==1)
    {
        asal++;
    }
    sayac++;
}
    printf("asal sayý sayýsý %d \n",asal);
    return 0;
}
