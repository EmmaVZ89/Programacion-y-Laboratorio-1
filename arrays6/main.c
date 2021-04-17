#include <stdio.h>
#include <stdlib.h>

#define TAM 5

// declarar un array de 5 enteros
// pedir al usuario los numeros
// informar cual fue el mayor
// quiero informar en cual o cuales
// posiciones se ingreso.

int cargarVector(int vec[], int tam);

int buscarMayor(int vec[], int tam, int* numMayor);

int encontrarPosiciones(int vec[], int tam, int* numMayor);

int main()
{
    int numeros[TAM];
    int mayor;

    if( !cargarVector(numeros, TAM))
    {
        printf("Hubo un error en los parametros recibidos para poder hacer la carga de datos.\n");
    }

    if( !buscarMayor(numeros, TAM, &mayor))
    {
        printf("Hubo un error en los parametros recibidos para determinar el numero mayor.\n");
    }

    if( !encontrarPosiciones(numeros, TAM, &mayor))
    {
        printf("Hubo un error en los parametros recibidos para determinar las posiciones.\n");
    }

    printf("\n\n");

    return 0;
}

int cargarVector(int vec[], int tam)
{
    int todoOk = 0;
    if(vec != NULL && tam > 0)
    {
        for (int i = 0; i < tam; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &vec[i]);
        }
        todoOk = 1;
    }

    return todoOk;
}

int buscarMayor(int vec[], int tam, int* numMayor)
{
    int todoOk = 0;

    if(vec != NULL && tam > 0 && numMayor != NULL)
    {
        for(int i = 0; i < tam; i++)
        {
            if(i == 0 || *numMayor < vec[i])
            {
                *numMayor = vec[i];
            }
        }
        printf("El numero mayor es: %d y se ingreso en la/las posicion/es ", *numMayor);
        todoOk = 1;
    }

    return todoOk;
}

int encontrarPosiciones(int vec[], int tam, int* numMayor)
{
    int todoOk = 0;

    if(vec != NULL && tam > 0 && numMayor != NULL)
    {
        for(int i = 0; i < tam; i++)
        {
            if(vec[i] == *numMayor)
            {
                printf("%d ", i+1);
            }
        }
        todoOk = 1;
    }

    return todoOk;
}
