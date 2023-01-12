#include <stdio.h>
#include <stdlib.h>

int main()
{int sayi,i,kar,iki;
 printf("lüyfen bir sayi giriniz\n");
 scanf("%d",&sayi);
 i=1;
 kar=0;
 iki=0;
 while(sayi<5&&sayi!=0)
 {
     i=i*sayi;
     sayi--;
 }printf("%d",i);
 if(sayi<=10&&sayi>=5)
 {
     kar=sayi*sayi;
     printf("karýnýz %d\n",kar);

 }
 else
 {
     if(sayi>10)
     {
         iki=(sayi/2)-1;
         printf("iki %d\n",iki);
     }
 }



    return 0;
}
