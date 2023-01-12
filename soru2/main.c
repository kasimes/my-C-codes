#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,issay,say,top,ort,max,min,j,temp;
int A[i];

    top=0;


    printf("lütfen dizi için n sayýsýný giriniz\n");
    scanf("%d",&n);
    for(i=0 ;i<n ;i++)
    {
        printf("lütfen deger giriniz\n");
        scanf("%d",&say);
        A[i]=say;

    }
    printf("lutfen yapýlacak islemin numarasýný giriniz\n"),
    scanf("%d",&issay);
    //while(issay != -1){

   // }

     for(i=0; i<n; i++)
        {
           top=top+A[i];

        }
    switch(issay){

case 1:

 printf("dizinin toplamý %d dir",top);

    break;

case 2:
     ort=top/n;
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























    printf("lütfen yapýlacak iþlemin numarasýný giriniz\n"),
    scanf("%d",issay);
    return 0;
}
