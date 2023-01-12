#include <stdio.h>
#include <stdlib.h>
/*kılavyeden girilen en elemanlı a dizisini giriniz girilen dizi elamnlarını - olnaları b dizisine + olanaları c dizisine yerleştirenprogram*/
int main()
{
    int A[10],i,C[10],B[10];
    int x=0,y=0;
    printf("lütfen A[]dizisini giriniz\n");
    for(i=0;i<10;i++)
    {
        printf("A[%d]:\n",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        if(A[i]<0)
        {
            x=x+1;
            B[x]=A[i];
            printf("%d",B[x]);

        }
        else if(A[i]>0)
        {
            y=y+1;
            C[y]=A[i];
            printf("%d",C[y]);

        }

    }
        for(i=0;i<10;i++)
       {


       }
    return 0;
}
