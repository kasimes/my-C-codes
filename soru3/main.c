#include <stdio.h>
#include <stdlib.h>

int main()
{ char str1[10],str2[100],str3[200];
int k,e,s;
 k=0;
e=0;
    printf("l�tfen str1 dizisini giriniz\n");
    gets(str1);
    printf("l�tfen str2 dizisini giriniz\n");
    gets(str2);

     while(str1[k]!='\0')
     {
         k++;
     }

      while(str1[e]!='\0')
     {
         e++;
     }






     printf("1-str1 dizisinin uzunlu�unu hesapla\n");
     printf("2- str2 dizisinin uzunlu�unu hesapla\n");
     printf("3-str1 ve str2 dizilerini birle�tir\n");
     printf("4- str1 dizisindeki en b�y�k karakteri bul\n");
     printf("5- str2 dizisindeki en k���k karakteri bul\n");
     printf("yapmak istedi�iniz i�lemi se�iniz\n");
     scanf("%d",&s);

     while(s!=-1)
     {
         switch(s)
         {
             case 1:
printf("str1 say�s� %d\n",k);

break;
             case 2:
 printf("str2 say�s� %d\n",e);

break;
             case 3:

            for(k=0;str1[k]!='\0';k++)
            {
                str3[k]=str1[k];
            }

                for(e=0;str2[e]!=0;e++)

                     str3[e+k]=str2[e];


            str3[k+e]='\0';
            printf("\n %c ",str3);
    break;











         }











     }


    return 0;
}
