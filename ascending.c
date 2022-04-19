//to arrange data in a array in ascending order

#include <stdio.h>

int main()
{
    int array[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};     //array to be in ascending order
    int a;      //variable for swapping the value 

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (array[i] > array[j])
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