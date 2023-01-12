#include <stdio.h>
#include <stdlib.h>
#define n 10
int main()
{  int diz[n],max,i;
max=0;
i=1;



    printf("lütfen dizinin elamanlarýný giriniz\n");
    scanf("%d",&diz);
    for(i=1;i<n;i++)
    {
        scanf("%d",&diz);
        if(max<diz[i])
        {
            max=diz[i];
        }

    }
    printf("dizinin en büyük sayýsý %d",max);

    return 0;
}
