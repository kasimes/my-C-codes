#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* kat sayýsý kýlavyeden girilen n.dereceden pollinomun x=b için degerini hesaplayan algoritmayý yazýnýz*/
int main()
{
    int n,a[n],b,i;
float t;
    printf("lütfen polinomun derecesini giriniz\n");
    scanf("%d",&n);
     printf ("lütfen polinomun kat sayýlarýný giriniz\n");
     for(i=0;i<n+1;i++)
    {
     scanf("%d",&a[i]);

    }
    printf("%d x=b\n",b);
    scanf("%d",&b);
    t=a[0];
    for(i=1;i<=n+1;i++)
    {
        t+=a[i]*pow(b,i);
    }

    printf("%f \n",t);
    return 0;
}
