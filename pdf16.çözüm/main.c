#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yil;
    printf("lütfen bir sene giriniz\n");
    scanf("%d",&yil);
    if(yil%4==0)
    {
        printf("artýk yýl\n");
    }
    else
    {
        printf("artýk yýl deðil");
    }
    return 0;
}

