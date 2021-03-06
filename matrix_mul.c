#include <stdio.h>

//fun to enter value in the array 
void enter_matrix(int A[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }
}

//fun to display value of the array 
void display_matrix(int A[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
//multiplying the array (main logic)
void multiply_matrix(int A[3][3], int B[3][3])
{
    int result[3][3];
    //if not initialized garbage value will be stored in result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    display_matrix(result);     //displaying result
}

int main()
{
    int A[3][3], B[3][3];
    printf("enter matrix A\n");
    enter_matrix(A);
    printf("enter matrix B\n");
    enter_matrix(B);
    multiply_matrix(A, B);
}