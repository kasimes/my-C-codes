#include <stdio.h>
#include <stdlib.h>


float degerler( float say1,float say2)

{ return  say1+say2;
}







int main()
{
    float say1,say2,carp,top,fark,bolum;

    printf("lütfen iki sayı giriniz \n");
    scanf("%f %f",&say1,&say2);

printf("%d",degerler(say1,say2));






    return 0;
}
