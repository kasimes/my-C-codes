#include <stdio.h>
#include <stdlib.h>
/* k�lavyeden girilen karakterin rakamm� harfmi oldugunu g�steren algoritma*/
int main()
{
    int m,k;
    char a;
    printf("l�tfen k�lavyeden herhamgi bir tu�a bas�n�z!\n");
    scanf("%c",&a);
    printf("%d \n",a);
    m=a;
    if(((m>64)&&(m<91))||((m<96)&&(m<123)))
    {
        printf("rakam\n",a);

    }
    else if((m>47)&&(m<58))
    {
        printf("di�er\n",a);
    }
    else
    {
        printf("harf\n");
    }
    return 0;
}
