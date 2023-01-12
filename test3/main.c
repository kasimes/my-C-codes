#include <stdio.h>
#include <stdlib.h>



int main()
{
   /*
   int (4 bytes)  %d
   double(8bytes) %lf
   float (4bytes) %f
    char(1bytes)%c
   */

int can=20;
float sayim= 4.64;
double doublesayim= 4.56;
char karakterim= 'h';

/*printf("can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
printf("int degiskeni hafizada %d byte kadar yer tutar\n",sizeof(int));
printf("char degiskeni hafizada %d byte kadar yer tutar\n",sizeof(char));
printf("float degiskeni hafizada %d byte kadar yer tutar\n",sizeof(float));
printf("double degiskeni hafizada %d byte kadar yer tutar\n",sizeof(double)); */

printf("can degiskeni hafizada %d byte kadar yer tutar\n",sizeof(can));
printf("int degiskeni hafizada %d byte kadar yer tutar\n",sizeof(int));
printf("char degiskeni hafizada %d byte kadar yer tutar\n",sizeof(karakterim));
printf("float degiskeni hafizada %d byte kadar yer tutar\n",sizeof(sayim));
printf("double degiskeni hafizada %d byte kadar yer tutar\n",sizeof(doublesayim));


    return 0;


}
