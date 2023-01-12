#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayac,carp;
sayac=1;
carp=1;
while(sayac<=25)
{
    carp=carp*sayac*sayac;
    sayac++;
}
    printf("carpým %d\n");
    return 0;
}
