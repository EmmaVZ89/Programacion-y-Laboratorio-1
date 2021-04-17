#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5]; // variable compuesta(vector)
    int x; // variable escalar
    int numeros[6];
    int y;

    x = 10;
    numeros[4] = 20;

    printf("x: %d\n", x);
    printf("numeros en la primer posicion: %d\n", numeros[4]);

    return 0;
}

// Variables:
//    -Escalares: guardan un solo valor
//    -Compuestas: Guardan varios valores
//    *Array: guardan valores del mismo tipo
//    *Estructuras: guardan valores de distinto tipo.
// Arrays:
//    *Unidimensionales (vectores).
//    *Bidimensionales (matrices).
