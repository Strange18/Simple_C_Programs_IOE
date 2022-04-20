//print the pattern of nepal
/*
    N
   EEE
  PPPPP
 AAAAAAA
LLLLLLLLL*/

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

            printf("%c", a[i]);
        }
        printf("\n");
    }
}