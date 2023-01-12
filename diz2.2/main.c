#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],islem,top=0,c=1,ht=0,t2=0,go,i,ort,kho,ho;

    printf("lütfen bir a dizisi giriniz\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf ("lütfen yapmak istediðini iþlemi seçiniz\n");
    printf("1- aritmetik ortalama \n");
    printf("2- geometrik ortalama\n");
    printf("3- harmanonik  ortalama \n");
    printf("4- kontraharmonik ortalama \n");
    scanf("%d",&islem);
    switch(islem)
    {
        case 1:
        {
            for(i=0;i<10;i++)
            {
                top=top+a[i];
            }
             ort=top/(10);

            printf("ortalamasi %d",ort);

        }
        case 2:
        {
             for(i=0;i<10;i++)
             {
                 c=c*a[i];
                 go=c^(1/10);
             }
                         printf("%d",go);


        }
        case 3:
            {
                {for(i=0;i<10;i++)

                    ht=ht+1/a[i];
                    ho=10/ht;
                }

                printf("d",ho);

            }
        case 4:
            {
              for(i=0;i<10;i++)
              {
                  t2=t2+(a[i]^(2));
                  kho=t2/top;
              }
              printf("%d",kho);
            }




    }
    return 0;
}
