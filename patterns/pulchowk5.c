/*
p
PU
pul
PULC
pulch
PULCHO
pulchow
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
            if (i % 2 == 0)
            {
                printf("%c", name[j] + 32);
            }
            else
                printf("%c", name[j]);
        }
        printf("\n");
    }
}
