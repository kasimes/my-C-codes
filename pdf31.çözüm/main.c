#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,say,ort,enb,enk,farko,top,ortort;
say=1;
enb=a;
enk=a;
top=a;
    printf("lütefen a sayýsýný giriniz\n");
    scanf("%d",&a);
    while(say<10)
    {
         printf("lütefen a sayýsýný giriniz\n");
         scanf("%d",&a);
         top=top+a;
         if(a>enb)
         {
             enb=a;
         }
         else
         {
             if(a<enk)
             {
                 enk=a;
             }
         }
         say++;
    }
    ort=top/10;
    farko=(enb+enk)/2;
    ortort=(farko+ort)/2;
    printf("farko %d \n",farko);
    printf("ort %d \n",ort);
    printf("ortort %d \n",ortort);


    return 0;
}
