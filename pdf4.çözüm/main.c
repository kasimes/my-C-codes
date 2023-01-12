#include <stdio.h>
#include <stdlib.h>

int main()
{ int cift,neg,i,yed,say;
cift=1;
neg=0;
yed=0;
i=0;
while(i<=5)
{ printf("lütfen bir sayı giriniz\n");
  scanf("%d",&say);
if(say<0)
{
    neg=neg+say;
}
else if(say%2==0)
{
    cift=cift*say;
}
else if(say=7)
{
    yed=yed+1;
}
    i++;
}

        printf("%d\n",neg);
        printf("%d\n",cift);
        printf("%d\n",yed);
    return 0;
}
