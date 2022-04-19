#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to DataFlair tutorials!\n\n");
    char character[30];
    FILE *fpointer;
    fpointer = fopen("C:\\program.txt", "w"); // Here "w" refers to write on file
    if (fpointer == NULL)
    {
        printf("Error! The file does not exist.");
        exit(0);
    }
    printf("Enter a character: ");
    scanf("%s", character);
    fprintf(fpointer, "%s", character); // Use of fprintf() function
    fclose(fpointer);
    return 0;
}