// to find largest in the array

#include <stdio.h>

int main()
{
    int array[10] = {100, 2, 3, 4, 5, 6, 7, 8, 9, 220};
    int a = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (a < array[i])
        {
            a = array[i];
        }
    }
    printf("the largest in the array is %d \n", a);
}