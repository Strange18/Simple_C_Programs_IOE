// more on structure array

#include <stdio.h>

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
    students s[2]; // structure array
    for (int i = 0; i < 2; i++)     //entering value to the structure
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].id);
        scanf("%s", s[i].school);
    }
    for (int i = 0; i < 2; i++)     //displaying value to the structure
    {
        printf("%s", s[i].name);
        printf("%d", &s[i].id);
        printf("%s", s[i].school);
    }
}