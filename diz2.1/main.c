#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],i,sc=0;

    printf("lütfen A B dizilerinini giriniz \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++)
    {
        sc=sc+a[i]*b[i];
    }
    printf("%d",sc);
    return 0;
}
