#include <stdio.h>
#include <stdlib.h>

int main()
{int boy,kilo;
printf("lütfen kilonuzu  ve boyunuzu girinizgiriniz\n");
scanf("%d%d",&kilo,&boy);
if(boy-kilo)
{
    printf("kilo vermelisiniz\n");

}
else
    {
        if(boy-kilo>=11)
        {
            printf("idal kilodasýnýz\n");
        }
    else
    {
        printf("kilo almaslýsýnýz \n");
    }





    }
    return 0;
}
