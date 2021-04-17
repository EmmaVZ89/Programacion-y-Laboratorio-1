#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostrarVectorEnteros(int vec[], int tam);
// void mostrarVectorEnteros(int* vec, int tam); Ambos son iguales

int main()
{
    int numeros[TAM] = {3, 2, 7, 9, 10};

//    for(int i = 0; i < TAM; i++)
//    {
//        printf("%d ", numeros[i]);
//    }

    mostrarVectorEnteros(numeros, TAM);

//    printf("\n\n");

    return 0;
}

void mostrarVectorEnteros(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]); // vec[0], vec[1], desplazamientos de size of.(4 bytes)
    }
    printf("\n\n");
}
// nomenclatura de puntero, el nombre del array es un PUNTERO que guarda la direccion de memoria del primer elemento
// nomenclatura vectorial, cuando se usan los corchetes.
