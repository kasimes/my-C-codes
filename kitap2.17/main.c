#include <stdio.h>
#include <stdlib.h>
/*k�lavyeden girilen a dizisini k���kten b�y�ye s�ralayan algoritma*/
int main()
{
    int A[10],i,g,j;
    printf("l�tfen A[] dizisini giriniz!\n");
    for(i=0;i<10;i++)
    {
        printf("A[%d]:\n",i);
        scanf("%d\n",&A[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<10;j++)
        {
            if(A[j]<A[i])
            {
                g=A[i];
                A[i]=A[j];
                A[j]=g;
            }
        }
    }
    for(j=0;j<10;j++)
    {
                printf("%d",A[j]);

                printf("A[%d]:\n",i);
    }
    return 0;
}
