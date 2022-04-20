
/*

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
    for (int i = 0; i <= 7; i++)
    {
        for (int k = 7 - i; k > 0; k--)
            printf(" ");
        for (int j = 7 - i; j < 8; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}
