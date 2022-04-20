// simple file opeartion and use of structure and file

#include <stdio.h>
#include <stdlib.h>

struct students
{
    // structure data holders
    char name[20];
    int id;
    char school[30];
};

// easier convention for making strutre variable
typedef struct students students;

int main()
{
    FILE *fpointer;
    fpointer = fopen("new_file.txt", "w");
    if (fpointer == NULL)
    {
        printf("'file cannot be opened\n");
        exit(0);
    }
    students s[2], r[2];
    for (int i = 0; i < 2; i++) // entering value to the structure
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].id);
        scanf("%s", s[i].school);
    }

    // writting in the file
    for (int i = 0; i < 2; i++) // entering value to the structure
    {
        fprintf(fpointer, "name = %s \n", s[i].name);
        fprintf(fpointer, "id = %d \n", s[i].id);
        fprintf(fpointer, "school = %s \n", s[i].school);
    }
    fclose(fpointer);

    // reading from the file
    // FILE *fpointer_read;
    // fpointer_read = fopen("new_file.txt", "r");
    // if (fpointer_read == NULL)
    // {
    //     printf("'file cannot be opened\n");
    //     exit(0);
    // }
    // for (int i = 0; i < 2; i++) // entering value to the structure
    // {
    //     fscanf(fpointer_read, "name = %s \n", s[i].name);
    //     fscanf(fpointer_read, "id = %d \n", s[i].id);
    //     fscanf(fpointer_read, "school = %s \n", s[i].school);
    // }
    // char reading;
    // while ((reading = fgetc(fpointer_read)) != EOF)
    // {
    //     // fscanf(fpointer_read,"%c", reading);
    //     printf("%c", reading);
    // }
    // printf("%s", reading);

    // fscanf(fileName, "%s %s %d", str1, str2, &yr);
//     fscanf(fpointer_read, "%s\t %d\t %s\n", r[0].name, &r[0].id, r[0].school);

//     printf("%s\n", r[0].name);
//     printf("%d\n", r[0].id);
//     printf("%s\n", r[0].school);

//     fclose(fpointer_read);
// }