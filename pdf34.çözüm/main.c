#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,n,t,f,i;
t=1;
f=1;
i=1;

    printf("l�tfen x say�s�n� giriniz\n");
    scanf("%d",&x);
    printf("l�tfen n say�s�n� giriniz\n");
     scanf("%d",&n);
    if(n+1==i)
    {

    }
    else
    {
        f=f*i;
        t=t+(x^i)/f;
        i++;
    }
    printf("%d",t);
    return 0;
}
