#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* klavyeden girilen dizinin standart sspamasýný ve varyansýný hesaplayan algoritma*/
int main()
{
    int a[10],i,v,s;
    int ao=0;
     int t=1;
    float b=0.5;
    int c=2;
    printf("lütfen a dizisini giriniz \n");
      for(i=0;i<=9;i++)
    {


    printf("%d ninci elamanı giriniz \n",i+1);

       scanf("%d",&a[i]);
       ao=ao+a[i];

    }
    ao=ao*0.1;
    for(i=0;i<10;i++)
    {
        t=t+pow((a[i]-ao),(c));
    }
    v=t*0.1;
    s=pow(v,b);
    printf("dizinini standart sapması %d \n ",s);
    printf("dizinin varyansý  %d !\n",v);
    return 0;
}
