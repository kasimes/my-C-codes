#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char dizi[1000];
    char isim[1000];

    printf("Bir isim giriniz:\n");
    scanf("%s",&isim);

    int a=0,i,b;

    for( i=0 ; isim[i]!='\0'; i++){}

    while(a<i)
    {
        for(b=a; b<i ; b++)
        {
            if(isim[a]<isim[b])
            {
                dizi[a] = isim[a];
            }
            else if(isim[a]==isim[b]){
                dizi[a] = isim[a];
            }
            else
            {
                dizi[a] = isim[b];
            }

        }

        a++;
    }



    printf("%s",dizi);

    return 0;
}

