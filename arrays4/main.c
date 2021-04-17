#include <stdio.h>
#include <stdlib.h>

# define TAM 5

// declarar un array de 5 enteros
// cargarlo secuencialmente con numeros ingresados por el usuario
// y mostrar solo los numeros pares
// void mostrarPares(int vec[], int tam);

void mostrarPares(int vec[], int tam);

void cargarVector(int vec[], int tam);

int main()
{
    int numeros[TAM];

    cargarVector(numeros, TAM);

    mostrarPares(numeros, TAM);

    return 0;
}

void cargarVector(int vec[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vec[i]);
    }

}

//void cargarVector(int* vec, int tam)
//{
//    for (int i = 0; i < tam; i++)
//    {
//        printf("Ingrese un numero: ");
//        scanf("%d", vec + i); // vec + 4 bytes(size of), aritmetica de punteros
//    }
//}


void mostrarPares(int vec[], int tam)
{
    printf("Los numeros pares son: ");
    for(int i = 0; i < tam; i++)
    {
        if(vec[i] % 2 == 0)
        {
            printf("%d ", vec[i]);
        }
    }
    printf("\n\n");
}

//void mostrarPares(int* vec, int tam)
//{
//    printf("Los numeros pares son: ");
//    for(int i = 0; i < tam; i++)
//    {
//        if(*(vec + i) % 2 == 0)
//        {
//            printf("%d ", *(vec + i));
//        }
//    }
//    printf("\n\n");
//}


