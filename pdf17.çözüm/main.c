#include <stdio.h>
#include <stdlib.h>

int main()
{int boy,kilo;
printf("l�tfen kilonuzu  ve boyunuzu girinizgiriniz\n");
scanf("%d%d",&kilo,&boy);
if(boy-kilo)
{
    printf("kilo vermelisiniz\n");

}
else
    {
        if(boy-kilo>=11)
        {
            printf("idal kilodas�n�z\n");
        }
    else
    {
        printf("kilo almasl�s�n�z \n");
    }





    }
    return 0;
}
