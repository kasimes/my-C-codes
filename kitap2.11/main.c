#include <stdio.h>
#include <stdlib.h>
/* k�lavyeden girilen rasgele b�y�k k���k girilen bir kelimenin b�y�k olan� k���k k���k olan�b�y�k yapan program*/

int main()
{
    char A[100];
    int a,i;
    printf("l�tfen harfleri b�y�k k���k kar���k girilmi� bir kelime gir!\n");
    gets(A);
    for(i=0;A[i]!='\0';i++)
    {
        a=i+1;

    }
    printf("karakter say�s�  %d\n",a);
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
