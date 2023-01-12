#include <stdio.h>
#include <stdlib.h>

int main()
{ int tek,cift,sayac,deger;
sayac=1;
tek=0;
cift=0;
while(sayac<500)
{
    if(sayac%2==0)
    {
        cift=cift+sayac;
    }
    else
        {
            tek=tek+sayac;
        }
    sayac++;
}
deger=cift-tek;
if(deger>0)
{
    printf("pozitf\n");
}
    else{printf("negatif\n");}
    return 0;
}
