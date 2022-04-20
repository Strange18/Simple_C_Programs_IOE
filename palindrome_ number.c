// to check a palindrom number
//  eg 121


#include <stdio.h>      //header file  -> printf,scanf

void palindrome(int a)      //UDF, function with argument and no return type
{
    int number = a;             
    int result = 0, remainder = 0;
    while (number != 0)
    {
        remainder = number % 10;            // 12,-> 2,1
        result = (result * 10) + remainder; //0+3 = 3*10+2 = 32*10+1=321
        number = number / 10;               //12, 1,0
    }
    // printf("%d \n", result);
    if (result == a)
    {
        printf("it is palindrome \n");
    }
    else
    {
        printf("it is not palindrome \n");
    }
}

int main()
{
    int a = 121;
    palindrome(a);          //function call
}