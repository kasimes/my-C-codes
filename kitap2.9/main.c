#include <stdio.h>
#include <stdlib.h>
/* kýlavyeden girilen karakterin rakammý harfmi oldugunu gösteren algoritma*/
int main()
{
    int m,k;
    char a;
    printf("lütfen kýlavyeden herhamgi bir tuþa basýnýz!\n");
    scanf("%c",&a);
    printf("%d \n",a);
    m=a;
    if(((m>64)&&(m<91))||((m<96)&&(m<123)))
    {
        printf("rakam\n",a);

    }
    else if((m>47)&&(m<58))
    {
        printf("diðer\n",a);
    }
    else
    {
        printf("harf\n");
    }
    return 0;
}
