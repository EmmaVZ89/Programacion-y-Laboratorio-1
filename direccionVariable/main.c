#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int numero = 16;
//
////    numero = 25;// numero es el nombre de fantasia.
//
////    *(&numero) = 23;// el valor en la direccion de memoria de numero.
//
//    printf("x vale con nombre de fantasia: %d\n", numero);
//    printf("la direccion de x es: %x\n", &numero); // %x la mascara direccion de memoria formato hexadecimal.
//    printf("x vale con operador de indireccion: %d\n", *(&numero));
//
// el * es el operador de indireccion.

    int numero;
    int* puntero = &numero; // puntero tiene que ser del mismo tipo de variable que la direccion que quiero guardar.

    *puntero = 45;

    printf("x vale: %d\n", numero);

    return 0;
}
