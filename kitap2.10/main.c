#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*klavyeden girilen c�mlenin tersten yazan algoritma*/
int main()
{
    int i,a;
    char A[1000];
    printf("c�mleyi giriniz !\n");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
        a=i;
    }
            printf("%d\n",a);
            printf("c�mlenin tersten yaz�lm�� hali\n");

    for(i=a;i>-1;i--)
    {
        printf("%c",A[i]);
    }

    return 0;
}
