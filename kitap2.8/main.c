#include <stdio.h>
#include <stdlib.h>
/* dizideki en k���k ve en b�y�k say�lar�n yerlerini g�steren algoritma*/
int main()
{
    int A[10],i,max,min,enbyer,enkyer;
    printf("l�tfen Adizisini girirniz\n");
    for(i=0;i<10;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
    }
    max=A[0];
    min=A[0];
    enbyer=1;
    enkyer=1;
    for(i=1;i<10;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            enbyer=i;
        }
        if(A[i]<min)
        {
            min=A[i];
            enkyer=i;
        }

    }
    printf("en b�y�k say� %d\n",max),
    printf("en b�y�k say� A[%d]\n",enbyer),
    printf("en k���k say� %d\n",min);
    printf("en k���k say�n�n yer A[%d]",enkyer);
    return 0;
}
