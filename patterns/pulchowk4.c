
/*
       K
      WK
     OWK
    HOWK
   CHOWK
  LCHOWK
 ULCHOWK
PULCHOWK

*/
#include <stdio.h>

int main()
{
    char name[] = "PULCHOWK";
    for (int i = 0; i <= 7; i++)                // i = 1
    {
        for (int j = 7 - i; j > 0; j--)         //j = 6, j = 5, j = 4
            printf(" ");
        for (int k = 7 - i; k < 8; k++)         //k = 6, k = 7
        {
            printf("%c", name[k]);
        }
        printf("\n");
    }
}
