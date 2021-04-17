#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostrarEnteros(int vec[], int tam);
void ordenarEnteros(int vec[], int tam, int criterio);// criterio 1 ascendente si es 0 descendente.

int main()
{
    int numeros[TAM] = {3,5,2,9,4};

    printf("Array original: ");
    mostrarEnteros(numeros, TAM);

    ordenarEnteros(numeros, TAM, 1);

    printf("Array ascendente: ");
    mostrarEnteros(numeros, TAM);

    ordenarEnteros(numeros, TAM, 0);

    printf("Array descendente: ");
    mostrarEnteros(numeros, TAM);

    return 0;
}

void mostrarEnteros(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n\n");
}


void ordenarEnteros(int vec[], int tam, int criterio)
{
    int aux;

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {
            if(criterio && vec[i] > vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
            else if (vec[i] < vec[j] && !criterio)
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}
