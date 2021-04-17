#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y);

int main()
{
    int a = 9;
    int b = 5;
//    int aux;

    printf("Antes del swap a: %d b: %d\n\n", a, b);

//    aux = a;
//    a = b;
//    b = aux;

    swap(&a, &b);

    printf("Despues del swap a: %d b: %d\n", a, b);

    return 0;
}

void swap(int* x, int* y)
{
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
