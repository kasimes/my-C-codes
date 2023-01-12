#include <stdio.h>
#include <stdlib.h>

int main()
{ int sayac,tah,sayi;
sayac=0;
sayi=15;
while(sayac<10)
      {
          printf("lütfen bir tahmin  giriniz\n");
           scanf("%d",&tah);


           if(tah==sayi)
           {
            printf("tebrikler buldunuz\n");
           }
           else
           {
               if(tah>sayi)
               {
                   printf("tahminiizi düşürünüz\n");
               }
               else
                {
                    printf("lütfrn tahminizi yükseltin\n")


                }
           }


      }



      return 0;

      }
