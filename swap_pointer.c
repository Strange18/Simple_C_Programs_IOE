// swap using pointer

//* -> deferencing operator
//& -> address

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
// void swap(int a, int b)
// {
//     int temp;
//     temp = b;
//     b = a;
//     a = temp;
// }
int main()
{
    int a = 10, b = 20;
    printf("%d\t%d\n", a, b);
    swap(&a, &b);
    // swap(a,b);
    printf("%d\t%d\n", a, b);
}
