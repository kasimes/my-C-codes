#include <stdio.h>
#include <stdlib.h>
/* k�lavyeden girilen bir c�mlede ka� kelime oldugunu bulan algoritma*/
int main()
{
    char A[100],B[5]={",;-:"};
    int i,j,say=0,a;
    printf("l�tfen bir c�mle giriniz!\n");
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        a=i+1;

    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<5;j++)
        {
            if(A[i]==B[j])
            {
                say=say+1;
            }
        }
    }
    printf("nu c�mlede %d tane kelime vard�r\n",say+1);
    return 0;
}
