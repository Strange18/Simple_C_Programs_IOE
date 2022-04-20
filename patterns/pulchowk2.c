// pattern of word pulchowk

/*
P
PU
PUL
PULC
PULCH
PULCHO
PULCHOW
PULCHOWK

*/

#include <stdio.h>

int main()
{
    char name[] = "PULCHOWK";
    for (int i = 0; i < 8; i++)              // i = 2
    {
        for (int j = 0; j <= i; j++)        // j = 0, i = 2
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}
