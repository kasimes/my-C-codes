#include <stdio.h>
#include <stdlib.h>

int main()


{

    float a,b;
    int sec;
    printf("lütfen dönüþtürmek istediðiniz metreyi giriniz\n");
    scanf("%f",&a);
    printf("lütfrn dönüþtürmek istediðiniz birimi seçiniz 1-mm 2-cm 3-dm 4-km\n");
           scanf("%d",&sec);
           switch(sec)
           {
               case 1:
               {
                   b=1000*a;
                   break;
               }
               case 2:
               {
                   b=100*a;
                   break;
               }
               case 3:
               {
                   b=10*a;
                   break;
               }
               case 4:
               {
                   b=a/1000;
                   break;
               }
           }
           printf("%f",b);
    return 0;
}
