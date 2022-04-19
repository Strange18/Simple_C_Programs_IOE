#include <stdio.h>

int add(int q, int r)
{
    int f = (q + r);
    return f;
}

int addition(int *q, int *r)
{
    int a = *q + *r;
    return a;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = add(a, b); //-> call by value
    printf("%d \n", c);
    int d = addition(&a, &b);       //call by reference 
    printf("%d \n", d);
}

//pointer
// int *a = &b;