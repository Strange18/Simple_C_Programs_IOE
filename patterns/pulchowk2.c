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
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}
