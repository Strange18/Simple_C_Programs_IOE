//to use structure 

#include <stdio.h>

struct student          //structure definition 
{
    char name[30];
    int id;
    char school[30];
} s1;                       //creating structure data type

int main()
{
    struct student s2;      //creating structure data type next way equivalent to int a

    // taking values in structure
    scanf("%s", s1.name);
    scanf("%d", &s1.id);
    scanf("%s", s1.school);

    printf("%s\n", s1.name);
    printf("%d\n", s1.id);
    printf("%s\n", s1.school);

    scanf("%s", s2.name);
    scanf("%d", &s2.id);
    scanf("%s", s2.school);

    printf("%s\n", s2.name);
    printf("%d\n", s2.id);
    printf("%s\n", s2.school);
}