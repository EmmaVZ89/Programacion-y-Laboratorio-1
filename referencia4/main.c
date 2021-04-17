#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int x;
//    int retorno;
//
//    printf("x: %d\n", x); // es basura
//
//    printf("Ingrese un numero: ");
//    retorno = scanf("%d", &x);
//
//    printf("Retorno: %d\n", retorno);
//    printf("x: %d\n", x);

    int dia;
    int mes;
    int anio;
    int retorno;

    printf("Ingrese fecha dd/mm/aaaa: ");
    retorno = scanf("%d/%d/%d", &dia, &mes, &anio);

    printf("Retorno: %d\n", retorno); // devuelve la cantidad de variables BIEN ingresadas, en orden izquierda a derecha, se detiene si encuentra un error.
    printf("La fecha ingresada es %d/%d/%d\n", dia, mes, anio);

    return 0;
}
