#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{int diz[10],min,i,x;
min=diz[0];
x=0;
    printf("lütfen diziyi giriniz \n");
    scanf("%d",&diz[0]);
    for(i=1;i<10;i++)
    {
        scanf("%d",&diz[i]);
    }
    while(i<10)
    {
         if(min>diz[i])
        {
            min=diz[i];

        }
i++;
    }


    printf("en küçük sayý %d ",min);
    return 0;
}
