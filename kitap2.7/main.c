#include <stdio.h>
#include <stdlib.h>
/* s�nava girenlerrin ortalama�n�n alt�nda kalanlat kald� �st�nde olanlar ge�ti yazan algoritma*/
int main()
{
    int i,A[10],top=0;
    float ort;
    printf("l�tfen s�n�ftaki �grencilerin notlar�n� giriniz\n");
    for(i=0;i<10;i++)
    {
        printf("A[%d]:\n",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        top=top+A[i];
    }
    ort=top/10;
    printf("%f\n",ort);
    for(i=0;i<10;i++)
    {
            if(A[i]<ort)
            {
                printf("%d kald� \n",A[i]);
            }
            else if(A[i]>ort)
            {
                printf("%d ge�ti \n",A[i]);
            }
    }
    return 0;
}
