#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,A,i,i�say,say,top,ort;
    i=0,
    top=0;


    printf("l�tfen dizi i�in n say�s�n� giriniz\n");
    scanf("%d",&n);
    for(i=0 ;i<n ;i++)
    {
        printf("l�tfen deger giriniz\n");
        scanf("%d",&say);
        A[i]=say;

    }
    printf("l�tfen yap�lacak i�lemin numaras�n� giriniz\n"),
    scanf("%d",&i�say);
    while(i�say != -1){

    }

     for(i=0; i<n; i++)
        {
           top=top+A[i];

        }
    switch(i�say){

case 1:


        printf("dizinin toplam� %d dir",ort);
    break;

case 2:
     ort=top/n
     printf("ortalaman�z%d",ort);
    break;

case 3:
    for(i=0 ;i<n ; i++)
    {
        if(ort<A[i])
        {
            printf("ortalamadan b�y�k olan say�lar %d",A[i]);
        }
    }
case 4:
    for(i=0 ;i<n ; i++)
    {

    }










default:
    printf("hatali giris");
    break;
    }























    printf("l�tfen yap�lacak i�lemin numaras�n� giriniz\n"),
    scanf("%d",i�say);
    return 0;
}
