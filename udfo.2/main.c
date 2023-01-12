#include <stdio.h>
#include <stdlib.h>

 int faktoriyel(int say)
 {
int fak=1;
     while(say!=0)
    {
        fak=fak*say;
        say--;
    }
    return fak;
 }



int main()
{   int say,fak;
fak=1;


    printf("lütfen bir sayı giriniz\n");
    scanf("%d",&say);

    printf("%d",faktoriyel(say));
    return 0;
}
