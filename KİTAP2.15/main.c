#include <stdio.h>
#include <stdlib.h>
/*kýlavyeden girillen kelimeyi ikiye bölerek her bir paraçayý tersten yazdýran algoritma*/
int main()
{
    int i,a;
    char B[100];
     printf("lütfen bir kelime giriniz\n");
     gets(B);
    for(i=0;B[i]!='\0';i++)
    {
        a=i+1;

    }

    printf("dizini uzunlugu %d\n",a);

    for(i=(a/2);i>=0;i--)
    {
        printf("%c\n",B[i]);
    }
    for(i=a;i>=(a/2)+1;i--)
    {
        printf("%c \n",B[i]);
    }
        return 0;
}
