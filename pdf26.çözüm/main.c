#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,c,x,y,delta;
     printf("l�tfen a say�s�n� giriniz\n");
     scanf("%d",&a);
     printf("l�tfen b say�s�n� giriniz\n");
     scanf("%d",&b);
     printf("l�tfen c say�s�n� giriniz\n");
     scanf("%d",&c);
     delta=(b*b)-(4*a*c);
     if(delta==0)
        {
            x=(-b)/(2*a);
                printf("%d",x);
        }

     else
     {
         if(delta<0)
         {
             printf("reel kok yoktur\n");
         }
         else
            {

                   x=(-b-(delta^(0,5)))/(2*a);
                   y=(-b+(delta^(0,5)))/(2*a) ;
                      printf("%d",x);
                      printf("%d",y);
            }
     }




    return 0;
}
