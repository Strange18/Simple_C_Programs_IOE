// to add two number

#include <stdio.h> //header file

int main() // main function
{
    // identifier declaration
    int variable; // interger data ---> variable identifer ma hold hunxa

    // identfier initialization
    // variable = 1;

    printf("enter the value for variable \n");

    scanf("%d", &variable);

    int variable2; // identiifer declaration

    variable2 = 2; // identifier initialization

    int result; // to store result

    result = variable2 + variable;

    printf("the result of addition %d \n", result);
}