#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;





    printf("lutfen 3 adet sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);


    /*  if(a>b && a>c)
     {
        printf("%d sayisi en buyuktu",a);
     }
      if(b>a && b>c)
      {
       printf("%d sayisi en buyuktur",b);
      }

      if(c>a && c>b)
        {
printf("%d sayisi en buyuktur",c);
      }
      if (a==b && a==c)
      {
          printf("%d hepsi birbirine esittir");
      }*/
        if(a>b && a>c)
     {
        printf("%d sayisi en buyuktu",a);
     }
     else if(b>a && b>c)
      {
       printf("%d sayisi en buyuktur",b);
      }

      else if(c>a && c>b)
        {
       printf("%d sayisi en buyuktur",c);
      }
     else  (a==b && a==c);
      {
          printf("%d hepsi birbirine esittir");
          }



    return 0;
}
