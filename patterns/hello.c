// pattern of hello 2078 regular exam
/*
H
HE
HEL
HELL
HELLO
HELL
HEL
HE
H
*/
#include <stdio.h>

int main()
{
    char name[10] = "HELLO";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
}