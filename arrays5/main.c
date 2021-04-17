#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// declarar un array de sexos
// inicializarlo por extension
// mostrar a traves de una funcion mostrarSexos(?)

int mostrarSexos(char vec[], int tam);

int main()
{
    char sexos[TAM] = {'m', 'f', 'm', 'm', 'f'};

    if( !mostrarSexos(sexos, TAM))// usando un retorno
    {
        printf("Hubo un problema con los parametros\n");
    }
//    mostrarSexos(sexos, TAM);

    return 0;
}

int mostrarSexos(char vec[], int tam)
{
    int todoOk = 0;

    if(vec != NULL && tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            printf("%c ", vec[i]);
        }
        printf("\n\n");

        todoOk = 1;
    }

    return todoOk;
}
