#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,issay,say,top,ort,max,min,j,temp;
int A[i];

    top=0;


    printf("l�tfen dizi i�in n say�s�n� giriniz\n");
    scanf("%d",&n);
    for(i=0 ;i<n ;i++)
    {
        printf("l�tfen deger giriniz\n");
        scanf("%d",&say);
        A[i]=say;

    }
    printf("lutfen yap�lacak islemin numaras�n� giriniz\n"),
    scanf("%d",&issay);
    //while(issay != -1){

   // }

     for(i=0; i<n; i++)
        {
           top=top+A[i];

        }
    switch(issay){

case 1:

 printf("dizinin toplam� %d dir",top);

    break;

case 2:
     ort=top/n;
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
    for(i=n-1 ; i>0 ; i--)
    {
        printf("%d",A[i]);

    }

case 5:
    max=A[0];
    min=A[0];
    for(i=1 ;i<n ; i++)
    {
       if(A[i]>max)
       {
           max=A[i];
       }
       if(A[i]<min)
       {
           min=A[i];
       }

       printf("max%dmin%d",max,min);
    }
case 6:
    for(i=0 ;i<n ; i++)
  {
      for(j=i+1 ;j<n ;j++)
      {
          if(A[j]<A[i])
          {
              temp=A[i];
              A[i]=A[j];
              A[j]=temp;
          }
      }
  }

      for(j=i+1 ;j<n ;j++)
      {
          printf("%d",A[i]);
      }




default:
    printf("hatali giris");
    break;
    }























    printf("l�tfen yap�lacak i�lemin numaras�n� giriniz\n"),
    scanf("%d",issay);
    return 0;
}
