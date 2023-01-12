#include <stdio.h>
#include <stdlib.h>
/* kýlavyeden girilen rasgele büyük küçük girilen bir kelimenin büyük olaný küçük küçük olanýbüyük yapan program*/

int main()
{
    char A[100];
    int a,i;
    printf("lütfen harfleri büyük küçük karýþýk girilmiþ bir kelime gir!\n");
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        a=i+1;

    }
    printf("karakter sayýsý  %d\n",a);
    for(i=0;i<=a;i++)
    {
        if((A[i]>=65)&&(A[i]<=90))
        {
            printf("%c",A[i]+32);
        }
        else
        {
            printf("%c",A[i]-32);
        }
    }
    return 0;
}
