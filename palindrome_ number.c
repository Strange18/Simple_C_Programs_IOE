// to check a palindrom number
//  eg 121

#include <stdio.h>
void palindrome(int a)
{
    int number = a;
    int result = 0, remainder = 0;
    while (number != 0)
    {
        remainder = number % 10;
        result = (result * 10) + remainder;
        number = number / 10;
    }
    printf("%d \n", result);
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
    palindrome(a);
}