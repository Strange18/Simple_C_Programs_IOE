// to add 2 numbers using UDF

#include <stdio.h>

// return type and with arguments
float addition(float s, float r);


int main()
{
    float x, y;
    printf("Enter 2 float numbers to be added\n ");
    scanf("%f %f", &x, &y);
    // scanf("%f",&y);
    float result;
    result = addition(x, y);
    printf("the value of addition is %.2f \n", result);
}

float addition(float a, float b)
{
    float c;
    c = a + b;
    return c;
}