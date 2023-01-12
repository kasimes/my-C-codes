#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,a,b,c;
    printf("lütfen hipotenüsü giriniz\n");
    scanf("%d",&h);
    for(a=1;a=h;a++)
    {
        for(b=a;b=h;b++)
        {
            c=(a^(2)+b^(2))^(1/2);
            if(c<h&&c==int)
            {
                printf("%d %d %d",a,b,c);
            }
        }
    }
    return 0;
}
