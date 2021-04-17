#include <stdio.h>
#include <stdlib.h>

void duplicar (int* p);// valor de direccion

int main()
{
    int numero = 10;

    printf("Antes de llamar a duplicar numero vale: %d\n", numero);

    duplicar(&numero);// pasamos direccion de memoria &numero

    printf("Despues de llamar a duplicar numero vale: %d\n", numero);

    return 0;
}

void duplicar (int* p)
{
    *p = *p * 2;

}

// 3 DATOS IMPORTANTES EN UNA VARIABLE
// -nombre de fantasia
// -valor
// -direccion de memoria (ubicacion de los bits)
// la direccion de memoria se asigna cuando se ejecuta el programa.
// con el "&" nos referimos a la direccion de memoria de la variable.
