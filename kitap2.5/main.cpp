#include <stdio.h>
#include <stdlib.h>
/*klavyeden girilen x,y nokta çiftinin kartezyen tablosunda yerini bulma*/

int main()
{ int i,X[5],say1,say2,say3,say4,Y[10];
    printf("lütfen X[] dizisini giriniz\n ");

    for(i=0;i<5;i++)
    {
        printf("X[%d]:\n",i);
        scanf("%d",&X[i]);
    }
        printf("lütfen Y[] dizisini giriniz\n ");

    for(i=0;i<5;i++)
    {
        printf("Y[%d]:\n",i);
        scanf("%d",&Y[i]);
    }
    say3=0;
    say1=0;
    say2=0,
    say4=0;
    for(i=0;i<10;i++)
    {
        if(X[i]>0&&Y[i]>0)
           {
               say1=say1+1;
           }
         else if(X[i]<0&&Y[i]>0)
            {
                say2=say2+1;
            }
         else if(X[i]<0&&Y[i]<0)
          {
              say3=say3+1;
          }
         else
         {
             say4=say4+1;
         }
    }
    printf("say1:%d say2:%d say3:%d say4:%d",say1,say2,say3,say4);
    return 0;
}
