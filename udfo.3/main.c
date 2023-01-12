#include <stdio.h>
#include <stdlib.h>

int ussayidegeri(int alt,int us)
{ int cevap;
int i;
 int sonuc=1;
   for (i=1;i<=us;i++)
   {
       sonuc=alt*sonuc;
   }


    return sonuc;
}

















int main()

{   int alt,us,cevap;


    printf("lütfen alt ve üs degerini giriniz\n");
    scanf("%d %d",&alt,&us);
          printf("%d^%d=%d",alt,us,ussayidegeri(alt,us));
    return 0;
}
