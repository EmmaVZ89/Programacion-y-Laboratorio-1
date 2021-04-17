#include <stdio.h>
#include <stdlib.h>
#include "menuOpciones.h"

void systemPause()
{
    printf("Presione una tecla para continuar...");
    fflush(stdin);
    getch();
}


char menu()
{
    char opcion;

    system("cls");
    printf("   *** Menu de Opciones ***\n\n");
    printf("a. Saludar\n");
    printf("b. Brindar\n");
    printf("c. Despedir\n");
    printf("d. Salir\n");
    printf("\nIngrese opcion: ");
    fflush(stdin);
    scanf("%c", &opcion);
    opcion = toupper(opcion);

    return opcion;
}
