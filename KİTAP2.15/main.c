#include <stdio.h>
#include <stdlib.h>
/*k�lavyeden girillen kelimeyi ikiye b�lerek her bir para�ay� tersten yazd�ran algoritma*/
int main()
{
    int i,a;
    char B[100];
     printf("l�tfen bir kelime giriniz\n");
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
