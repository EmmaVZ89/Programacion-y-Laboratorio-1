#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//    char sexos[5] = {'f','m','m','m','f'};
    char nombre[20]; // {"Juan"} con o sin llaves funciona
    char nombre2[20];

    strcpy(nombre, "Juan");// asignacion de derecha a izquierda, cadena1 y cadena2.
    strcpy(nombre2, "Jose");

    strcpy(nombre2, nombre);

    printf("%s\n", nombre);
    printf("%s\n", nombre2);

//    int edad = 20;
//
//    printf("Me llamo %s y tengo %d anios\n", nombre, edad);

    return 0;
}
