// to arrange data in a array in descending order

#include <stdio.h>

int main()
{
    int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};   //array definiton or can be taken from user
    int a;      //variable for swapping data in the array

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (array[i] < array[j])
            {
                a = array[j];
                array[j] = array[i];
                array[i] = a;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}