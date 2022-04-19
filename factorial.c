#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
int main()
{
    system("clear");
    int fact;
    fact = factorial(5);
    printf("%d \n", fact);
}