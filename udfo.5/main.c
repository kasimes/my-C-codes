#include <stdio.h>
#include <stdlib.h>

    void sayilist()
    {
        int sayi;
        while(1)
        {
            printf("lütfen bir sayi giriniz\n");
            scanf("%d",&sayi);
            if(sayi<0)
            {
                break;
            }
        }
    }




int main()
{
    sayilist();
    return 0;
}
