#include <stdio.h>
#include <stdlib.h>
/* sýnava girenlerrin ortalamaýnýn altýnda kalanlat kaldý üstünde olanlar geçti yazan algoritma*/
int main()
{
    int i,A[10],top=0;
    float ort;
    printf("lütfen sýnýftaki ögrencilerin notlarýný giriniz\n");
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
                printf("%d kaldý \n",A[i]);
            }
            else if(A[i]>ort)
            {
                printf("%d geçti \n",A[i]);
            }
    }
    return 0;
}
