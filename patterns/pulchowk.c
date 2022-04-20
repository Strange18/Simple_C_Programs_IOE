// to print the pattern of pulchowk worddd

/*
P
UU
LLL
CCCC
HHHHH
OOOOOO
WWWWWWW
KKKKKKKK

 */

#include <stdio.h>

int main()
{
    char name[] = "PULCHOWK";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[i]);
        }
        printf("\n");
    }
}