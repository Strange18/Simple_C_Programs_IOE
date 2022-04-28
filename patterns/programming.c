#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "PROGRAMMING";
    int length = strlen(name);
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i; j <= length - i + 1; j++)
        {
            printf("%c", name[j - 1]);
        }
        printf("\n");
    }
}