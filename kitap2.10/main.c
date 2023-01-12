#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*klavyeden girilen cümlenin tersten yazan algoritma*/
int main()
{
    int i,a;
    char A[1000];
    printf("cümleyi giriniz !\n");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
        a=i;
    }
            printf("%d\n",a);
            printf("cümlenin tersten yazýlmýþ hali\n");

    for(i=a;i>-1;i--)
    {
        printf("%c",A[i]);
    }

    return 0;
}
