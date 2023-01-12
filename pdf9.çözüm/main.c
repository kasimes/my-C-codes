#include <stdio.h>
#include <stdlib.h>

int main()
{int sayac1,sayac2,top1,top2;
sayac2=2;
top2=1;
sayac1=1;
top1=0;

while(sayac1<100)
{
    if(sayac1%2==0)
    {
        top1=sayac1+top1;
    }
        sayac1++;
}
while(top1>sayac2)
{
    if(top1%sayac2==0)
    {
        top2=sayac2+top2;
    }
    sayac2++;
}
if(top1==top2)
{
     printf("mükemmel sayý\n");
}
else
{
    printf("mükemmel sayý degil\n");
}


    return 0;
}
