#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ts,i,j;

    for(i=1;i!=9;i++)
    {
        for(j=1;j!=9;j++)
        {
            ts=10*i+(j);
            if(ts%i==0&&ts%j==0)
            {
                printf("%d",ts);
            }
        }
    }
    return 0;
}
