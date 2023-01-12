#include <stdio.h>
#include <stdlib.h>

int main()
{ int say1,say2,say3,sayac;
say1=1;
say2=1;
printf("%d\n",say1);
printf("%d\n",say2);
sayac=2;
while(sayac<10)
{
    if(sayac==11)
    {

    }
    else
    {
        say3=say1+say2;
        printf("%d\n",say3);
        say1=say2;
        say2=say3;
        sayac++;
    }
}




    return 0;
}
