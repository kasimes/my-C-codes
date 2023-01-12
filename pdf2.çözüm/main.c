#include <stdio.h>
#include <stdlib.h>

int main()
{ int tek,cift,say,oran,i;
cift=0;
i=1;
tek=0;
while(i<=4)
    {
     printf("lütfen bir sayi giriniz\n");
     scanf("%d",&say);
    if(say%2==0)
    {
        cift=cift+say;
    }
    else
    {
        tek=tek+say;
    }
    i++;


    }
   oran=cift/tek;

 printf("%d",oran);

    return 0;
}
