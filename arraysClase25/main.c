#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    for(int i = 0; i < 3; i++)
    {
        printf("Hola\n");

        for(int j = 0; j < 5; j++)
        {
            printf("Chau\n");
        }
    }
    // i = 0    j = 0/1/2/3/4
    // i = 1    j = 0/1/2/3/4
    // i = 2    j = 0/1/2/3/4

    return 0;
}
