#include <stdio.h>
#include <stdlib.h>
/* dizideki en küçük ve en büyük sayýlarýn yerlerini gösteren algoritma*/
int main()
{
    int A[10],i,max,min,enbyer,enkyer;
    printf("lütfen Adizisini girirniz\n");
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
    printf("en büyük sayý %d\n",max),
    printf("en büyük sayý A[%d]\n",enbyer),
    printf("en küçük sayý %d\n",min);
    printf("en küçük sayýnýn yer A[%d]",enkyer);
    return 0;
}
