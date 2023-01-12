#include <stdio.h>
#include <stdlib.h>
/* klavyeden birim dürtü ve giriþ iþareti girilen ayarýk iki sistemin çýkýþýný hesaplayan program*/
int main()
{int a,b,j,k,i;
 float x[100],y[100] ,h[100];

    printf("giriþ iþaretinin uzunlugu:\n");
    scanf("%d\n",&a);
    printf("birim dürtü cevabýnýn uzunlugu:\n");
    scanf("%d\n",&b);
        for(i=0;i<a;i++);
        {
            printf("lütfen x[%d]: \n",i+1);
            scanf("%f",&x[i]);
        }
        for(i=0;i<b;i++)
        {
          printf("lütfen h[%d] : \n",i+1);
          scanf("%f",&h[i]);

        }
        for(j=1;i<=a+b-1;i++)
        {
            y[i]=0;
            k=i;
                for(j=1;j<=b;j++)
            {
              if((k>=1)&&(k<=a))
              {
                  y[i]=y[i]+x[k]*h[j];
              }
              k=k-1;
            }
            printf("%f",y[i]);
        }


    return 0;
}
