#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,A,i,iþsay,say,top,ort;
    i=0,
    top=0;


    printf("lütfen dizi için n sayýsýný giriniz\n");
    scanf("%d",&n);
    for(i=0 ;i<n ;i++)
    {
        printf("lütfen deger giriniz\n");
        scanf("%d",&say);
        A[i]=say;

    }
    printf("lütfen yapýlacak iþlemin numarasýný giriniz\n"),
    scanf("%d",&iþsay);
    while(iþsay != -1){

    }

     for(i=0; i<n; i++)
        {
           top=top+A[i];

        }
    switch(iþsay){

case 1:


        printf("dizinin toplamý %d dir",ort);
    break;

case 2:
     ort=top/n
     printf("ortalamanýz%d",ort);
    break;

case 3:
    for(i=0 ;i<n ; i++)
    {
        if(ort<A[i])
        {
            printf("ortalamadan büyük olan sayýlar %d",A[i]);
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























    printf("lütfen yapýlacak iþlemin numarasýný giriniz\n"),
    scanf("%d",iþsay);
    return 0;
}
