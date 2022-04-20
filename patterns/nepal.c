// pattern of triangle form of Nepal
/*      
    N
   eee
  PPPPP
 aaaaaaa
LLLLLLLLL
*/

#include <stdio.h>

int main()
{

    char a[] = "NEPAL";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5 - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i + 1); k++)
        {
            if (i % 2 == 0)
                printf("%c", a[i]);
            else
                printf("%c", a[i] + 32);
        }
        printf("\n");
    }
}