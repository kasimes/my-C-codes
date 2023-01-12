#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,b[10];
    printf("lütfen bir dizi giriniz\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++)
    {
        b[i]=a[9-i];
        printf("%d",b[i]);
    }
    return 0;
}
