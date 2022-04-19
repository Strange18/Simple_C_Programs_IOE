// armstrong number is number whose sum of cube of digits is 
//equal to the number (153 -> 1^3+5^3+3^3 = 153)

#include <stdio.h>

void armstrong(int a)       //function to check armstrong number
{
    int number = a;
    int result = 0, remainder = 0;
    while (number != 0)
    {
        remainder = number % 10;
        result = (result) + (remainder * remainder*remainder);
        number = number / 10;
    }
    printf("%d \n", result);
    if (result == a)
    {
        printf("it is armstrong \n");
    }
    else
    {
        printf("it is not  armstrong \n");
    }
}
int main()
{
    int a = 153;
    armstrong(153);
}