#include <stdio.h>

// return type -> int
// addition -> identifier
// a,b -> values

// int addition(int a ,int b);                    // void -> no return

void new()        //type 1
{
    int apple = 1; 
    printf("%d \n", apple );
}

float rejina()      //type 2
{
    float a = 1.5;
    float b = 2.5;
    return (a + b);
}


void langre(int b)  //type 3
{
    printf("%d \n", b);
}


int addition(int a, int b)
{
    return (a + b);
}

int main()
{
    int a = 1;
    int b = 2;
    // int c = 0;
    // c = addition(a, b);

    //type 1 
    new();
    //type 2
    printf("%f \n", rejina());

    //type 3
    langre(b);

    //type 4
    printf("%d \n", addition(a, b));

}
